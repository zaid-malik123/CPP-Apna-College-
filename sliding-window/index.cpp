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