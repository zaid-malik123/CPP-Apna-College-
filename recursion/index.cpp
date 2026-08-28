// // #include<iostream>

// // using namespace std;

// // void printCountRecursively(int n) {

// //     if(n == 0) {
// //         return;
// //     }

// //     printCountRecursively(n-1);

// //     cout << n << endl;

// //     return;

// // }

// // int main () {

// //     int n;
// //     cout << "Enter the number : ";
// //     cin >> n;

// //     printCountRecursively(n);

// //     return 0;

// // }

// // print even numbers;

// // #include<iostream>

// // using namespace std;

// // void printEven(int n) {

// //     if(n==2) {
// //         cout << n;
// //         return;
// //     }

// //     cout << n << endl;
// //     printEven(n-2);

// // }

// // int main () {

// //     int n;
// //     cout << "Enter any Even Number : ";
// //     cin >> n;

// //     printEven(n);

// //     return 0;
// // }

// // sum of n natual number using recursion;

// // #include<iostream>

// // using namespace std;

// // int printSumOfNaturalNumber(int n) {

// //     if(n == 1) {
// //         return 1;
// //     }

// //     return n + printSumOfNaturalNumber(n-1);

// // }

// // int main () {

// //     int n;
// //     int sum = 0;
// //     cout << "Enter the number : ";
// //     cin >> n;

// //     int sumTotal = printSumOfNaturalNumber(n);
// //     cout << "Natural Number sum is " << sumTotal << endl;
// //     return 0;
// // }

// // sum of fibonaci series;

// // #include<iostream>

// // using namespace std;

// // int sum(int n) {

// //     if(n == 0 || n == 1) {
// //         return n;
// //     }

// //     return sum(n-1) + sum(n-2);
// // }

// // int main () {

// //     int n = 5;

// //     cout << sum(n);

// // }

// // check is array sorted or not ?

// // #include<iostream>

// // using namespace std;

// // bool checkIsSort( int *arr, int n, int i) {

// //     if(i == n-1) {
// //         return true;
// //     }

// //     if(arr[i] > arr[i+1]) {
// //         return false;
// //     }

// //     return checkIsSort(arr, n, i+1);

// // }

// // int main () {

// //     int arr1[5] = {1, 2, 3, 4, 5};
// //     int arr2[5] = {1, 3, 2, 4, 5};

// //     int n = 5;
// //     int i = 0;

// //     bool ans = checkIsSort(arr2, n, i);

// //     cout << ans << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int searchTarget(int arr[], int n, int i, int target) {

// //     if (i == n) {
// //         return -1;
// //     }

// //     if (arr[i] == target) {
// //         return i;
// //     }

// //     return searchTarget(arr, n, i + 1, target);
// // }

// // int main() {

// //     int arr[] = {1, 2, 2, 2, 4, 5, 6};
// //     int target = 2;
// //     int i = 0;
// //     int n = sizeof(arr) / sizeof(arr[0]);

// //     int ans = searchTarget(arr, n, i, target);
// //     cout << "Target IDX is " << ans << endl;

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // int lastOccurance(int arr[], int n, int target, int i) {

// //     if(i == n) {
// //         return -1;
// //     }

// //     int idxfound = lastOccurance(arr, n, target, i + 1);

// //     if(arr[i] == target && idxfound == -1) {
// //         return i;
// //     }

// //     return idxfound;
// // }

// // int main () {

// //     int arr[5] = {1, 2, 2, 2, 3};

// //     int n = 5;
// //     int target = 2;

// //     int i = 0;

// //     cout << "Last Occ : " << lastOccurance(arr, n, target, i) << endl;

// //     return 0;

// // }

// // print x^n using recursion;

// // #include<iostream>

// // using namespace std;

// // int calPow(int x, int n) {

// //     if(n == 0) {
// //         return 1;
// //     }

// //     return x * calPow(x, n-1);

// // }

// // int main () {

// //     int x, n;

// //     cout << "Enter the Value of X : ";
// //     cin >> x;

// //     cout << "Enter the Value of N : ";
// //     cin >> n;

// //     cout << "Answer is : " << calPow(x, n) << endl;

// //     return 0;
// // }

// // optimized approach to calculate power using recursion;

// // #include <iostream>

// // using namespace std;

// // int calPow(int x, int n) {

// //     if( n == 0) {
// //         return 1;
// //     }

// //     int half = calPow(x, n/2);

// //     if(n % 2 != 0) {
// //         return x * half * half;
// //     }

// //     return half * half;

// // }

// // int main()
// // {

// //     int x, n;

// //     cout << "Enter the Value of X : ";
// //     cin >> x;

// //     cout << "Enter the Value of N : ";
// //     cin >> n;

// //     cout << "Answer is : " << calPow(x, n) << endl;

// //     return 0;
// // }

// // trilling problem using recursion;

// // #include<iostream>

// // using namespace std;

// // int trillingProblem(int n) {

// //     if(n == 0 || n == 1) {
// //         return 1;
// //     }

// //     return trillingProblem(n-1) + trillingProblem(n-2);

// // }

// // int main () {

// //     int n = 5;

// //     cout << trillingProblem(n) << endl;

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // int sumOfSqr(int n) {

// //     if(n == 1) {
// //         return 1;
// //     }

// //     return n * n + sumOfSqr(n-1);
// // }

// // int main () {

// //     int n;

// //     cout << "Enter the No : ";
// //     cin >> n;

// //     cout << "Ans is : " << sumOfSqr(n) << endl;

// //     return 0;
// // }

// // euclidian algoritham;

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int a = 12;
// //     int b = 18;

// //     while (b != 0)
// //     {
// //         int rem = a % b;
// //         a = b;
// //         b = rem;
// //     }

// //     cout << "GCD = " << a << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int gcd(int a, int b)
// // {
// //     if (b == 0)
// //         return a;

// //     return gcd(b, a % b);
// // }

// // int main()
// // {
// //     int a = 12;
// //     int b = 18;

// //     cout << gcd(a, b);

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void removeDuplicate(string str, string ans, vector<int> &v, int n, int i) {

// //     if(i == n) {
// //         cout << ans << endl;
// //         return;
// //     }

// //     if(v[i] == 1) {
// //         removeDuplicate(str, ans, v, n,  i+1);
// //     }

// //     else {
// //         ans += str[i];
// //         v[i] = 1;
// //     }

// // }

// // int main () {

// //     string str = "appnna colllege";

// //     string ans = "";

// //     vector<int>v(26, 0);

// //     int n = str.size();

// //     int i = 0;

// //     return 0;
// // }

// // recursion in array lecture 55;

// // print array using recursion;

// // #include<iostream>

// // using namespace std;

// // int main () {

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void printArr(int arr[], int n, int i) {

// //         if(i == n) {
// //             return;
// //         }
// //         printArr(arr, n, i+1);
// //         cout << arr[i] << endl;

// //         return ;

// // }

// // int main () {

// //     int arr[] = {1, 2, 3, 4, 5};
// //     int n = 5;

// //     int i = 0;

// //     printArr(arr, n, i);

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // int sum(int arr[], int n, int i) {

// //     if(i == -1) return 0;

// //     return arr[i] + sum(arr, n, i-1);

// // }

// // int main () {

// //     int arr[] = {1, 2, 3, 4, 5};

// //     int n = 5;

// //     int i = n-1;

// //     cout << sum(arr, n, i) << endl;

// //     return 0;

// // }

// // #include<iostream>

// // using namespace std;

// // int Minimum(int arr[],  int n, int i) {

// //     if(i==n) return INT_MAX;

// //     return min(arr[i], Minimum(arr, n, i+1));

// // }

// // int main () {

// //     int arr[] = {7, 2, 1, 4, 6};

// //     int n = 5;
// //     int i = 0;

// //     cout << "Min No :- " << Minimum(arr, n, i) << endl;

// //     return 0;
// // }

// // recursion in array;

// // #include<iostream>

// // using namespace std;

// // bool checkPalindrome(string str, int n, int i , int j) {

// //     if(i >= j) {
// //         return true;
// //     }

// //     if(str[i] != str[j]) return false;

// //     return checkPalindrome(str, n, i+1, j-1);

// // }

// // int main () {

// //     string str = "madom";
// //     int n = str.size();
// //     int i = 0;
// //     int j = n-1;

// //     cout << checkPalindrome(str, n, i, j) << "Your string palindrome" << endl;

// //     return 0;
// // }

// // count vowels;

// // #include<iostream>

// // using namespace std;

// // int countVowels(string str, int n, int i) {

// //     if(i == n) return 0;

// //     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
// //         return 1 + countVowels(str, n, i + 1);
// //     }

// //     else {
// //           return  countVowels(str, n, i + 1);
// //     }

// // }

// // int main () {

// //     string str = "zaid";

// //     int n = str.size();

// //     int i = 0;

// //     cout << "String Vowels are : " << countVowels(str, n, i) << endl;

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void reverseStr(string &str, int n, int i, int j) {

// //     if(i >= j) return;

// //     swap(str[i], str[j]);

// //     reverseStr(str, n, i+1, j-1);

// // }

// // int main () {

// //     string str = "zaid";
// //     int n = str.size();
// //     int i = 0;
// //     int j = n-1;

// //     reverseStr(str, n, i, j);

// //     cout << str << endl;

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void lowerToCapital(string &str, int n, int i) {

// //     if(i == n) return;

// //     str[i] = 'A' + str[i] - 'a';

// //     lowerToCapital(str, n, i+1);
// // }

// // int main () {

// //     string str = "zaid";

// //     int n = str.size();

// //     int i = 0;

// //     lowerToCapital(str, n, i);

// //     cout << str << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // bool BinarySearch(int arr[], int n, int target, int st, int end) {

// //     if (st > end) {
// //         return false;
// //     }

// //     int mid = st + (end - st) / 2;

// //     if (arr[mid] == target) {
// //         return true;
// //     }
// //     else if (arr[mid] < target) {
// //         return BinarySearch(arr, n, target, mid + 1, end);
// //     }
// //     else {
// //         return BinarySearch(arr, n, target, st, mid - 1);
// //     }
// // }

// // int main() {

// //     int arr[5] = {1, 2, 3, 4, 5};
// //     int n = 5;
// //     int x = 4;

// //     if (BinarySearch(arr, n, x, 0, n - 1))
// //         cout << "Found";
// //     else
// //         cout << "Not Found";

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // int searchInRotatedArray(int arr[], int st, int end, int target) {

// //     if(st > end) return -1;

// //     int mid = st + ( end - st ) / 2;

// //     if(arr[mid] == target) {
// //         return mid;
// //     }

// //     if( arr[st] <= arr[mid] ) { // line 1

// //         if(arr[st] <= target && arr[end] >= target) {
// //             return searchInRotatedArray(arr, st, mid-1, target);
// //         }

// //         else {
// //             return (arr, mid+1, end, target);
// //         }
// //     }

// //     else { // line 2;

// //         if(arr[mid] <= target && arr[end] >= target) {

// //             searchInRotatedArray(arr, mid+1, end, target);

// //         }

// //         else {
// //             searchInRotatedArray(arr, st, mid-1, target);
// //         }

// //     }

// // }

// // int main () {

// //     int arr[] = {4, 5, 6, 7, 0, 1, 2};

// //     int n = 7;

// //     int st = 0;
// //     int end = n - 1;
// //     int target = 0;

// //     cout << "Your searching elem idx is : " << searchInRotatedArray(arr, st, end, target) << endl;

// //     return 0;
// // }

// // print the subsequence;

// // #include<iostream>

// // using namespace std;

// // void subsequence(int arr[], int n, int i, vector<vector<int>>&ans, vector<int> &temp) {

// //     if( i == n ) {
// //         ans.push_back(temp);
// //         return;
// //     }

// //     // not include;
// //     subsequence(arr, n, i+1, ans, temp);

// //     // include;
// //     temp.push_back(arr[i]);
// //     subsequence(arr, n, i+1, ans, temp);
// //     temp.pop_back();

// // }

// // int main () {

// //     int arr[] = { 1, 2, 3 };

// //     int n = 3;

// //     vector<int> temp;
// //     vector<vector<int>> ans;

// //     int i = 0;

// //     subsequence(arr, n, i, ans, temp);

// //     for ( int i = 0; i < ans.size(); i++ ) {

// //         for ( int j = 0; j < ans[i].size(); j++ ) {

// //             cout << ans[i][j] << " ";

// //         }

// //         cout << endl;
// //     }

// //     cout << "Your ans size is :- " << ans.size() << endl;

// //     return 0;

// // }

// // #include<iostream>

// // using namespace std;

// // void generateParanthrasis( int n, int left, int right, vector<string>& ans, string &temp) {

// //     if ( left + right == 2*n ) {
// //         ans.push_back(temp);
// //         return;
// //     };

// //     if( left < n) {

// //         temp.push_back('(');
// //         generateParanthrasis(n, left+1, right, ans, temp);
// //         temp.pop_back();
// //     }

// //     if ( right < left ) {
// //         temp.push_back(')');
// //         generateParanthrasis(n, left, right+1, ans, temp);
// //         temp.pop_back();
// //     }
// // }

// // int main() {

// //     int n = 3;

// //     vector<string> ans;
// //     string temp;

// //     int left = 0;
// //     int right = 0;

// //     generateParanthrasis(n, left, right, ans, temp);

// //     for ( int i = 0; i < ans.size(); i++ ) {
// //         cout << ans[i] << endl;
// //     }

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void subsetSum( int arr[], int n, int i, int total, vector<int> &temp) {

// //     if ( i == n) {

// //         cout << total << endl;

// //         return;
// //     };

// //     subsetSum(arr, n, i+1, total, temp);

// //     subsetSum(arr, n, i+1, total+=arr[i], temp);

// // }

// // int main () {

// //     int arr[] = { 3, 4, 5 };

// //     int n = 3;

// //     int total = 0;

// //     int i = 0;

// //     vector<int> temp;

// //     subsetSum(arr, n, i, total, temp);

// //     return 0;

// // }

// // target sum;

// // #include<iostream>

// // using namespace std;

// // int find(int arr[], int n, int i, int target, int &count) {

// //     if(target == 0) {
// //         return 1;
// //     }

// //     if( i == n || target < 0) return 0;

// //     return find(arr, n, i+1, target, count) + find(arr, n, i+1, target-arr[i], count);

// // }

// // int main () {

// //     int arr[] = {5, 2, 3, 6, 10, 8};
// //     int n = 6;
// //     int target = 10;
// //     int count = 0;

// //     int i = 0;

// //     cout << find(arr, n, i, target, count) << endl;

// //     return 0;

// // }

// // subarrays with k diffrent integers;

// // #include<iostream>

// // using namespace std;

// // void countSubarrayWithDistinctInteger (int arr[], int n, int i, int k, int &count) {

// //     if ( i == n ) return;

// //     unordered_map<int, int> mp;

// //     int low = i;
// //     int high = i;

// //     while (high < n)
// //     {
// //         /* code */

// //         mp[arr[high]]++;

// //         while (k < mp.size())
// //         {
// //             break;
// //         }

// //         if(mp.size() == k ) {
// //             count++;
// //         }

// //         high++;

// //     }

// //     countSubarrayWithDistinctInteger(arr, n, i+1, k, count);

// // }

// // int main () {

// //     int arr[] = { 1, 2, 1, 2, 3};
// //     int n = 5;
// //     int k = 2;
// //     int i = 0;
// //     int count = 0;

// //     countSubarrayWithDistinctInteger(arr, n, i, k, count);

// //     cout << "Your count is " << count << endl;

// // }

// // #include<iostream>

// // using namespace std;

// // int subset(int arr[], int n, int i, int sum) {

// //     if ( i == n) {

// //         return sum == 0;

// //     }

// //     return subset(arr, n, i+1, sum) + subset(arr, n, i, sum-arr[i]);
// // }

// // int main () {

// //     int arr[] = {2, 5, 6, 1};
// //     int n = 4;

// //     int sum = 8;

// //     int i = 0;

// //     cout << subset(arr, n, i, sum) << endl;
// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // int targetRepetation( int arr[], int n, int i, int sum ) {

// //     if( i == n || sum < 0 ) return 0;

// //     if( sum == 0 ) return 1;

// //     return targetRepetation(arr, n, i+1, sum) + targetRepetation(arr, n, i, sum-arr[i]);

// // }

// // int main() {

// //     int arr[] = {2, 3, 4};
// //     int n = 3;
// //     int sum = 6;

// //     int i = 0;

// //     cout << targetRepetation(arr, n, i, sum) << endl;

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void permutation( int arr[], int n, int i, vector<vector<int>> &ans, vector<int> &temp, vector<bool>&visited) {

// //     if( temp.size() == n ) {

// //         ans.push_back(temp);

// //         return;
// //     }

// //     for( int i = 0; i < n; i++ ) {

// //         if( visited[i] == 0 ) {

// //             visited[i] = 1;

// //             temp.push_back(arr[i]);

// //             permutation(arr, n, i, ans, temp, visited);

// //             visited[i] = 0;

// //             temp.pop_back();

// //         }
// //     }

// // }

// // int main () {

// //     int arr[] = { 1, 2, 3 };
// //     int n = 3;
// //     int i = 0;

// //     vector<vector<int>> ans;
// //     vector<int> temp;
// //     vector<bool> visited(n, 0);

// //     permutation(arr, n, i, ans, temp, visited);

// //     for( int i = 0; i < ans.size(); i++ ) {

// //         for( int j = 0; j < ans[i].size(); j++ ) {

// //             cout << ans[i][j] << " ";

// //         }

// //         cout << endl;

// //     }

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void permutation(vector<int> &arr, int n, int idx, vector<vector<int>> &ans) {

// //     if ( idx == n ) {

// //          ans.push_back(arr);
// //          return;

// //     }

// //     vector<int> visit(21, 0);

// //     for ( int i = idx; i < n; i++ ) {

// //         if( visit[ arr[ i ] + 10 ] == 0 ) {

// //             swap(arr[i], arr[idx]);

// //             permutation(arr, n, idx + 1, ans);

// //             swap(arr[i], arr[idx]);

// //             visit[ arr[ i ] + 10 ] = 1;

// //         }

// //     }

// // }

// // int main() {

// //     vector<int> arr = { 1, 1, 2, 2 };

// //     int n = arr.size();

// //     int idx = 0;

// //     vector<vector<int>> ans;

// //     permutation(arr, n, idx, ans);

// //     for ( int i = 0; i < ans.size(); i++ ) {

// //         for( int j = 0; j < ans[0].size(); j++ ) {

// //             cout << ans[i][j] << " ";

// //         }

// //         cout << endl;

// //     }

// //     return 0;

// // }

// // #include<iostream>

// // using namespace std;

// // int countWays(int arr[], int n, int idx, int sum, int count) {

// //     if( sum < 0 || idx == n ) return 0;

// //     if( sum == 0 ) {

// //         count++;
// //         return 1;
// //     }

// //     for ( int i = 0; i < n; i++ ) {
// //         countWays(arr, n, idx+1, sum, count);
// //     }

// // }

// // int main () {

// //     int arr[] = {1, 5, 6};
// //     int n = 3;

// //     int sum = 7;

// //     int i  = 0;

// //     int count = 0;

// //     countWays(arr, n, i, sum, count);

// //     return 0;

// // }

// #include<iostream>

// using namespace std;

// int winner(vector<bool> &person, int n, int k, int killing_person, int idx) {

//     if ( killing_person == 1 ) {

//         for( int i = 0; i < n; i++ ) {

//             if(person[i] == 0) {

//                 return i;

//             }
//         }
//     }

//     int kill = (k - 1) % killing_person;

//     while(kill--) {

//         idx = ( idx + 1) % n;

//         while (person[idx] == 1)
//         {
//             /* code */
//             idx = ( idx + 1) % n;
//         }

//     }

//     person[idx] = 1;

//     while (person[idx] == 1)
//     {
//         /* code */

//         idx = ( idx + 1 ) % n;

//     }

//     return winner(person, n, k, killing_person-1, idx);

// }

// int main () {

//     int n = 6;
//     int k = 4;

//     int killing_person = n;

//     vector<bool> person(n, 0);

//     int idx = 0;

//     cout << winner(person, n, k, killing_person, idx) << endl;

//     return 0;

// }

// optimized approach;

// #include<iostream>

// using namespace std;

// int winner(int n, int k) {

//     if ( n == 1 ) {
//         return 0;
//     }

//     return (winner(n-1, k) + k) % n;

// }

// int main () {

//     int n = 5;

//     int k = 3;

//     cout << winner(n, k) << endl;

//     return 0;

// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// bool safe(int i, int j, int n,
//           vector<vector<bool>>& visited,
//           vector<vector<int>>& mat) {

//     if (i >= 0 &&
//         i < n &&
//         j >= 0 &&
//         j < n &&
//         !visited[i][j] &&
//         mat[i][j] != 0) {

//         return true;
//     }

//     return false;
// }

// void rateMaze(vector<vector<int>>& mat,
//               int n,
//               int i,
//               int j,
//               string path,
//               vector<string>& ans,
//               vector<vector<bool>>& visited) {

//     if (i == n - 1 && j == n - 1) {
//         ans.push_back(path);
//         return;
//     }

//     visited[i][j] = 1;

//     if (safe(i - 1, j, n, visited, mat)) {
//         path.push_back('U');

//         rateMaze(mat, n, i - 1, j,
//                  path, ans, visited);

//         path.pop_back();
//     }

    
//     if (safe(i + 1, j, n, visited, mat)) {
//         path.push_back('D');

//         rateMaze(mat, n, i + 1, j,
//                  path, ans, visited);

//         path.pop_back();
//     }

    
//     if (safe(i, j - 1, n, visited, mat)) {
//         path.push_back('L');

//         rateMaze(mat, n, i, j - 1,
//                  path, ans, visited);

//         path.pop_back();
//     }

    
//     if (safe(i, j + 1, n, visited, mat)) {
//         path.push_back('R');

//         rateMaze(mat, n, i, j + 1,
//                  path, ans, visited);

//         path.pop_back();
//     }

    
//     visited[i][j] = 0;
// }

// int main() {

//     vector<vector<int>> mat = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };

//     int n = 4;

//     int x = 0;
//     int y = 0;

//     string path;

//     vector<string> ans;

//     vector<vector<bool>> visited(
//         n, vector<bool>(n, false)
//     );

//     rateMaze(mat, n, x, y,
//              path, ans, visited);

//     for (string p : ans) {
//         cout << p << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void binaryNumbers(int n, string ans) {

   
//     if(n == 0) {
//         cout << ans << endl;
//         return;
//     }

    
//     binaryNumbers(n - 1, ans + "1");

//     int oneCount = 0;

//     int zeroCount = 0;

//     for ( int i = 0; i < ans.size(); i++ ) {

//         if( ans[i] == '0' ) {
//             zeroCount++;
//         }

//         else {
//             oneCount++;
//         }
//     }

//     if ( oneCount > zeroCount ) {
//         binaryNumbers(n - 1, ans + "0");
//     }
// }

// int main() {

//     int n = 4;

//     binaryNumbers(n, "");

//     return 0;
// }