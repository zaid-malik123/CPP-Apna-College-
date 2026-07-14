// // // longest substring without repeating char;

// // // brute force time complexity = o(n^3) space complexity = o(1)

// // // #include<iostream>

// // // using namespace std;

// // // int main () {

// // //     string s = "abac";

// // //     int n = s.length();
// // //     int maxLength = 0;

// // //     for(int i = 0; i < n; i++ ) {

// // //         for(int j = i; j < n; j++) {

// // //             int freq[256] = {0};
// // //             bool isValid = true;

// // //             for(int k = i; k <= j; k++) {

// // //                 if(freq[s[k]] == 1) {
// // //                     isValid = false;
// // //                     break;
// // //                 }

// // //                 else {
// // //                     freq[s[k]]++;
// // //                 }

// // //             }

// // //             if(isValid) {
// // //                 maxLength = max(maxLength, j - i + 1);
// // //             }

// // //             cout << endl;
// // //         }

// // //         cout << endl;

// // //     }

// // //     cout << "Max lenght is " << maxLength << endl;

// // //     return 0;
// // // }

// // // efficient approach sliding window;

// // // #include<iostream>

// // // using namespace std;

// // // int main () {

// // //     vector<bool> count(256, 0);
// // //     string s = "abac";
// // //     int len = 0;

// // //     int first = 0;

// // //     int second = 0;

// // //     while (second < s.size())
// // //     {
// // //         /* code */

// // //         while (count[s[second]])
// // //         {
// // //             /* code */

// // //             count[s[first]] = 0;
// // //             first++;

// // //         }

// // //         count[s[second]] = 1;

// // //         len = max(len, second - first + 1);
// // //         second++;

// // //     }

// // //     cout << "Lenght is " << len << endl;

// // //     return 0;
// // // }

// // // #include <iostream>
// // // #include <vector>
// // // #include <climits>

// // // using namespace std;

// // // int main()
// // // {
// // //     string s = "AABBBCBBAC";

// // //     int n = s.size();

// // //     int diff = 0;
// // //     int len = INT_MAX;

// // //     int first = 0;
// // //     int second = 0;

// // //     vector<int> count(256, 0);

// // //     // Count total distinct characters
// // //     while (first < n)
// // //     {
// // //         if (count[s[first]] == 0)
// // //             diff++;

// // //         count[s[first]]++;

// // //         first++;
// // //     }

// // //     // Reset frequency array
// // //     for (int i = 0; i < 256; i++)
// // //         count[i] = 0;

// // //     first = 0;

// // //     // Sliding Window
// // //     while (second < n)
// // //     {
// // //         // Expand window until it becomes valid
// // //         while (diff > 0 && second < n)
// // //         {
// // //             if (count[s[second]] == 0)
// // //                 diff--;

// // //             count[s[second]]++;

// // //             second++;
// // //         }

// // //         // Shrink window while it is still valid
// // //         while (diff == 0)
// // //         {
// // //             len = min(len, second - first);

// // //             count[s[first]]--;

// // //             if (count[s[first]] == 0)
// // //                 diff++;

// // //             first++;
// // //         }
// // //     }

// // //     cout << "Smallest length is : " << len << endl;

// // //     return 0;
// // // }

// // // string prefix;

// // // #include<iostream>

// // // using namespace std;

// // // int main () {

// // //     string s = "AACAA";

// // //     int n = s.size();

// // //     int ans = 0;

// // //     for(int i = 1; i < n-1; i++) {

// // //         string prefix = "";
// // //         string suffix = "";

// // //         for(int j = 0; j < i; j++) {

// // //             prefix += s[j];
// // //         }

// // //         for(int k = n-i; k < n; k++) {

// // //             suffix += s[k];

// // //         }

// // //         if(prefix == suffix) {
// // //             ans = prefix.size();
// // //         }

// // //     }

// // //     return 0;
// // // }

// // // calculate lps;

// // // #include <iostream>

// // // using namespace std;

// // // int main()
// // // {

// // //     string s = "ABCABDABCABCABD";

// // //     int n = s.size();

// // //     vector<int> lps(n, 0);

// // //     int prefix = 0;

// // //     int suffix = 1;

// // //     while (suffix < n)
// // //     {
// // //         /* code */

// // //         if (s[prefix] == s[suffix])
// // //         {
// // //             lps[suffix] = prefix + 1;
// // //             prefix++;
// // //             suffix++;
// // //         }

// // //         else {

// // //             if(prefix == 0) {
// // //                 lps[suffix] = 0;
// // //                 suffix++;
// // //             }

// // //             else {
// // //                 prefix = lps[prefix - 1];
// // //             }
// // //         }
// // //     }

// // //     cout <<  "Max Lps is "  << lps[n-1] << endl;
// // // }

// // class Solution {
// // public:
// //     int strStr(string haystack, string needle) {

// //         if (needle.size() == 0)
// //             return 0;

// //         vector<int> lps(needle.size(), 0);

// //         int prefix = 0;
// //         int suffix = 1;

// //         // Build LPS Array
// //         while (suffix < needle.size()) {

// //             if (needle[prefix] == needle[suffix]) {

// //                 prefix++;
// //                 lps[suffix] = prefix;
// //                 suffix++;
// //             }

// //             else {

// //                 if (prefix == 0) {

// //                     lps[suffix] = 0;
// //                     suffix++;
// //                 }

// //                 else {

// //                     prefix = lps[prefix - 1];
// //                 }
// //             }
// //         }

// //         int first = 0;
// //         int second = 0;

// //         // Search
// //         while (first < haystack.size() && second < needle.size()) {

// //             if (haystack[first] == needle[second]) {

// //                 first++;
// //                 second++;
// //             }

// //             else {

// //                 if (second == 0) {

// //                     first++;
// //                 }

// //                 else {

// //                     second = lps[second - 1];
// //                 }
// //             }
// //         }

// //         if (second == needle.size()) {

// //             return first - second;
// //         }

// //         else {

// //             return -1;
// //         }
// //     }
// // };

// // #include<iostream>

// // using namespace std;

// // int main () {

// //     string s = "aaaotcaakr";

// //     string rev = s;

// //     s += '$';

// //     reverse(rev.begin(), rev.end());

// //     s += rev;

// //     vector<int> lps(s.size(), 0);

// //     int len = 0;

// //     int i = 1;

// //     while (i < s.size())
// //     {
// //         /* code */

// //         if(s[i] == s[len]) {
// //             len++;
// //             lps[i] = len;
// //             i++;
// //         }

// //         else {
// //             if(len == 0) {
// //                 lps[i] = 0;
// //                 i++;
// //             }

// //             else {
// //                 len = lps[len - 1];
// //             }
// //         }
// //     }

// //     int sLps = lps[lps.size() - 1];

// //     cout << "Your ans is " << rev.size() - sLps;

// //     return 0;
// // }

// // circular pattern matching;

// #include <iostream>

// using namespace std;

// int main()
// {

//     string s = "cdeabroab";
//     string pattern = "abcde";
//     int size = s.size();

//     string copy = s;

//     s += copy;

//     vector<int> lps(pattern.size(), 0);

//     int len = 0;

//     int i = 1;

//     while (i < pattern.size())
//     {
//         /* code */

//         if (pattern[i] == pattern[len])
//         {
//             len++;
//             lps[i] = len;
//             i++;
//         }

//         else
//         {
//             if (len == 0)
//             {
//                 lps[i] = 0;
//                 i++;
//             }
//             else
//             {
//                 len = lps[len - 1];
//             }
//         }
//     }

//     int first = 0;
//     int second = 0;

//     while (first < s.size())
//     {
//         /* code */

//         if (s[first] == pattern[second])
//         {
//             first++;
//             second++;
//         }

//         else
//         {

//             if (second == 0)
//             {
//                 first++;
//             }
//             else
//             {
//                 second = lps[second - 1];
//             }
//         }

//         if (second == pattern.size())
//         {
//             cout << "Pattern found at index: " << (first - second) << endl;
//             return 0; 
//         }
//     }

//     cout << "Pattern not found " << endl;

//     return 0;
// }