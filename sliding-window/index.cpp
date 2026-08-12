// Sliding Window

// What is Sliding Window?

// Sliding Window is an efficient algorithm used to solve subarray and substring problems.

// Instead of recalculating the answer for every possible window, we reuse the previous computation by moving the window one step at a time.

// This reduces the time complexity from O(n²) to O(n) in many problems.

// Where is Sliding Window Used?

// It is commonly used to find:

// Maximum Sum
// Minimum Sum
// Average
// Count
// Longest Subarray/Substring
// Smallest Subarray/Substring
// Maximum Frequency
// Minimum Window
// K Distinct Characters
// Unique Characters
// Anagrams
// First Step

// Whenever you see a problem involving:

// Array
// String
// Subarray
// Substring

// Ask yourself:

// Can Sliding Window be applied here?

// Types of Sliding Window

// There are 2 Types

// 1. Fixed Size Window

// Window size is already given.

// Example:

// Find the maximum sum of any subarray of size K.

// Here,

// K = 3

// Window size never changes.

// Example

// [2 1 5] 3 2 8

// ↓

// 2 [1 5 3] 2 8

// ↓

// 2 1 [5 3 2] 8

// The window simply slides one position at a time.

// 2. Dynamic (Variable) Size Window

// Window size is NOT given.

// Instead, we expand or shrink the window according to a condition.

// Example:

// Longest substring without repeating characters

// Smallest subarray with sum >= K

// Longest subarray with at most K distinct elements

// Here,

// low and high

// both move according to the condition.

// dynamiv size window example;

// count of substring without repeating chat;

// fixed window template;

// int low = 0;

// // Window ko expand karo
// for (int high = 0; high < n; high++) {

//     // Current element ko window me add karo
//     add(arr[high]);

//     // Jab window ka size K ho jaye
//     if (high - low + 1 == k) {

//         // Answer update karo
//         updateAnswer();

//         // Left element remove karo
//         remove(arr[low]);

//         // Window ko slide karo
//         low++;
//     }
// }

// dynamic window template;

// int low = 0;

// for (int high = 0; high < n; high++) {

//     // Current element ko window me add karo
//     add(arr[high]);

//     // Jab tak condition satisfy hai (ya invalid hai, problem ke hisaab se)
//     while (condition) {

//         // Left element remove karo
//         remove(arr[low]);

//         low++;
//     }

//     // Answer update karo
//     updateAnswer();
// }

// longest substring with uniqe char of k;

// #include <iostream>

// using namespace std;

// int main()
// {

//     string str = "aabacbebebe";

//     unordered_map<int, int> mp;

//     int n = str.size();

//     int high = 0;
//     int low = 0;

//     int k = 3;

//     int len = INT_MIN;

//     for (high = 0; high < n; high++)
//     {

//         mp[str[high]]++;

//         while (mp.size() > k)
//         {
//             /* code */

//             mp[str[low]]--;

//             if (mp[str[low]] == 0)
//             {
//                 mp.erase(str[low]);
//             }

//             low++;
//         }

//         if (mp.size() == k)
//         {
//             len = max(len, high - low + 1);
//         }
//     }

//     cout << len << endl;

//     return 0;
// }

// longest substring without repeating char

// #include<iostream>

// using namespace std;

// int main () {

//     string s = "abcabcbb";

//     int n = s.size();

//     unordered_map<int, int> mp;

//     int high = 0;

//     int low = 0;

//     int len = INT_MIN;

//     for(high = 0; high < n; high++) {

//         mp[s[high]]++;

//         while (mp[s[high]] > 2)
//         {
//             /* code */

//             mp[s[low]]--;

//             if(mp[s[low]] == 0) {
//                 mp.erase(s[low]);
//             }

//             low++;
//         }

//         len = max(len, high - low + 1);

//     }

//     cout << len << endl;

//     return 0;
// }

// longest substring with repeating char;

// #include<iostream>

// using namespace std;

// int main () {

//     string str = "AAAAABBBCC";

//     int n = str.size();

//     int low = 0, high = 0;

//     int maxLen = INT_MIN;

//     unordered_map<int, int> mp;

//     for( high = 0; high < n; high++ ) {

//         mp[str[high]]++;

//         while (mp.size() > 1)
//         {
//             /* code */

//             mp[str[low]]--;

//             if(mp[str[low]] == 0) {
//                 mp.erase(str[low]);
//             }

//             low++;

//         }

//         maxLen = max(high - low + 1, maxLen );
//     }

//     cout << maxLen << endl;

//     return 0;
// }

// longest repeating character replacement;

// #include <iostream>

// using namespace std;

// int findMax(int arr[])
// {

//     int maxVal = 0;

//     for (int i = 0; i < 256; i++)
//     {
//         maxVal = max(arr[i], maxVal);
//     }

//     return maxVal;
// }

// int main()
// {

//     string str = "AABACBA";

//     int n = str.size();

//     int k = 1;

//     int high = 0;

//     int low = 0;

//     int arr[256] = {0};

//     int res = INT_MIN;

//     for (high = 0; high < n; high++)
//     {

//         arr[str[high]]++;

//         int len = high - low + 1;

//         int maxVal = findMax(arr);

//         int dif = len - maxVal;

//         while (dif > k)
//         {
//             /* code */

//             arr[str[low]]--;

//             low++;

//             len = high - low + 1;

//             maxVal = findMax(arr);

//             dif = len - maxVal;

//         }

//         len = high - low + 1;

//         res = max(len, res);

//     }

//     cout << "Your Max Value is " << res << endl;

//     return 0;
// }

// longest substring without repeating char;

// #include<iostream>

// using namespace std;

// int main () {

//     string str = "abcdaabbfg";

//     int n = str.size();
//     unordered_map<int, int> mp;

//     int low = 0;
//     int high = 0;
//     int res = INT_MIN;

//     for( high = 0; high < n; high++ ) {

//         mp[str[high]]++;

//         int k = high - low + 1;

//         while (mp.size() < k)
//         {
//             /* code */

//             mp[str[low]]--;

//             if(mp[str[low]] == 0) {
//                 mp.erase(str[low]);
//             }

//             low++;

//             k = high - low + 1;
//         }

//         res = max(res, high - low + 1);

//     }

//     cout << "Max without repeating char is " << res << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[] = {1, 1, 0, 0, 1 , 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int k = 2;

//     int low = 0, high = 0;
//     int binary[2] = {0};

//     int res = INT_MIN;

//     for( high = 0; high < n; high++ ) {

//         binary[arr[high]]++;

//         int countZero = binary[0];

//         while (countZero > k)
//         {
//             /* code */

//             binary[arr[low]]--;

//             low++;

//             countZero = binary[0];
//         }

//         res = max(res, high - low + 1);

//     }

//     cout << res << endl;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// bool checkStrExistOrNot(string str, string s)
// {

//     vector<int> freq(256, 0);

//     for (char ch : str)
//         freq[ch]++;

//     for (char ch : s)
//     {
//         if (freq[ch] == 0)
//             return false;

//         freq[ch]--;
//     }

//     return true;
// }

// int main()
// {

//     string str = "ABCECODEBANC";

//     string s = "ABC";

//     int low = 0;

//     int high = 0;

//     int res = INT_MAX;

//     for (high = 0; high < str.size(); high++)
//     {

//         bool exist = checkStrExistOrNot(
//             str.substr(low, high - low + 1),
//             s);

//         while (exist)
//         {
//             /* code */

//             res = min(res, high - low + 1);

//             low++;

//             exist = checkStrExistOrNot(
//                 str.substr(low, high - low + 1),
//                 s);
//         }
//     }

//     string ans = "";

//     for(int i = low; i <= high; i++ ){
//         ans += str[i];
//     }


//     cout << ans;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// bool sahi(int have[], int needed[]) {

//     for(int i = 0; i < 256; i++ ) {

//         if(have[i] < needed[i]) {
//             return false;
//         }
//     }

//     return true;

// }

// int main () {

//     string str = "ADOBECODEBANC";
//     string s = "ABC";

//     int have[256] = {0};
//     int needed[256] = {0};

//     for(int i = 0; i < 256; i++ ) {

//         needed[s[i]]++;

//     }

//     int high = 0, low = 0, start = 0, res = INT_MAX;

//     for( high = 0; high < str.size(); high++ ) {
        
//         have[str[high]]++;

//         while (sahi(have, needed))
//         {
//             /* code */

//             int len = high - low + 1;

//             if(res > len) {
//                 res = len;
//                 start = low;
//             }

//             have[str[low]]--;
//             low++;

//             sahi(have, needed);

//         }
        
//     }


//     if(res != INT_MAX) {
//         cout << str.substr(start, res);
//     };


//     return 0;
// }

// fruites into basket;

// #include<iostream>

// using namespace std;

// int main() {

//     int arr[] = { 0, 1, 2, 2 };

//     int n = sizeof(arr) / sizeof(arr[0]);

//     unordered_map<int, int> mp;

//     int low = 0, high = 0, ans = INT_MIN;

//     for( int high = 0; high < n; high++ ) {

//         mp[arr[high]]++;

//         while (mp.size() > 2)
//         {
//             /* code */

//             mp[arr[low]]--;

//             if(mp[arr[low]] == 0) {
//                 mp.erase(arr[low]);
//             }

//             low++;
//         }

//         ans = max(ans, high - low + 1);

        
//     }
    
//     cout << ans << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {

//     string str = "aabacbebebe";

//     int n = str.size();

//     int k = 3;

//     int low = 0;

//     int high = 0;
//     int ans = INT_MIN;

//     unordered_map<int, int> mp;

//     for( high = 0; high < n; high++ ) {

//         mp[str[high]]++;

//         while (mp.size() > k)
//         {
//             /* code */

//             mp[str[low]]--;

//             if(mp[str[low]] == 0) {
//                 mp.erase(str[low]);
//             }

//             low++;
//         }

//         if( mp.size() <= k) {

//             ans = max(ans, high - low + 1);
//         }
        
//     }

//     cout << "Your ans is " << ans << endl;

    
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[6] = {2,3,1,2,4,3};

//     int n = 6;

//     int target = 7;

//     int sum = 0;

//     int high = 0;
//     int low = 0;
//     int ans = INT_MAX;

//     for( high = 0; high < n; high++ ) {

//         sum += arr[high];

//         while (sum >= target)
//         {
//             /* code */

//             ans = min( ans, high - low + 1);

//             sum -= arr[low];

//             low++;

            
//         }
        
//     }

//     cout << "Your ans is " << ans << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main () {

//     string str = "AABBBCBBAC";

//     int n = str.size();

//     int ans = INT_MAX;


//     int low = 0;

//     int high = 0;

//     int freq[256] = {0};
//     int k = 0;

//     for( int i = 0; i < n; i++ ) {

//         if( freq[str[i]] == 0 ) {
//             k++;
//         }

//         freq[str[i]]++;
//     }

//     unordered_map<int, int> mp;

//     for ( high = 0; high < n; high++ ) {

//         mp[str[high]]++;

//         while (mp.size() == k)
//         {
//             /* code */

//             ans = min( ans, high - low + 1);

//             mp[str[low]]--;

//             if(mp[str[low]] == 0) {
//                 mp.erase(str[low]);
//             }

//             low++;

//         }
        
//     }

//     cout << "Your ans is " << ans << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[] = { 1, 2, 1, 2, 3};
//     int n = 5;

//     int count = 0;

//     int k = 2;

//     int low = 0;
//     int high = 0;

//     unordered_map<int, int> mp;

//     for ( high = 0; high < n; high++ ) {

//         mp[arr[high]]++;

//         while (mp.size() > k)
//         {
//             /* code */

//             mp[arr[low]]--;

//             if( mp[arr[low]] == 0) {
//                 mp.erase(arr[low]);
//             }

//             low++;
//         }
        
//         if( mp.size() == k ) {
//             count++;
//         }

        
//     }

//     cout << "Total count is " << count + k + 1 << endl;

//     return 0;

// }