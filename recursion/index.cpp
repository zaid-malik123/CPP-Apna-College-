// #include<iostream>

// using namespace std;

// void printCountRecursively(int n) {

//     if(n == 0) {
//         return;
//     }

//     printCountRecursively(n-1);

//     cout << n << endl;

//     return;

// }

// int main () {

//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     printCountRecursively(n);

//     return 0;

// }

// print even numbers;

// #include<iostream>

// using namespace std;

// void printEven(int n) {

//     if(n==2) {
//         cout << n;
//         return;
//     }

//     cout << n << endl;
//     printEven(n-2);

// }

// int main () {

//     int n;
//     cout << "Enter any Even Number : ";
//     cin >> n;

//     printEven(n);

//     return 0;
// }

// sum of n natual number using recursion;

// #include<iostream>

// using namespace std;

// int printSumOfNaturalNumber(int n) {

//     if(n == 1) {
//         return 1;
//     }

//     return n + printSumOfNaturalNumber(n-1);

// }

// int main () {

//     int n;
//     int sum = 0;
//     cout << "Enter the number : ";
//     cin >> n;

//     int sumTotal = printSumOfNaturalNumber(n);
//     cout << "Natural Number sum is " << sumTotal << endl;
//     return 0;
// }

// sum of fibonaci series;

// #include<iostream>

// using namespace std;

// int sum(int n) {

//     if(n == 0 || n == 1) {
//         return n;
//     }

//     return sum(n-1) + sum(n-2);
// }

// int main () {

//     int n = 5;

//     cout << sum(n);

// }

// check is array sorted or not ?

// #include<iostream>

// using namespace std;

// bool checkIsSort( int *arr, int n, int i) {

//     if(i == n-1) {
//         return true;
//     }

//     if(arr[i] > arr[i+1]) {
//         return false;
//     }

//     return checkIsSort(arr, n, i+1);

// }

// int main () {

//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[5] = {1, 3, 2, 4, 5};

//     int n = 5;
//     int i = 0;

//     bool ans = checkIsSort(arr2, n, i);

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int searchTarget(int arr[], int n, int i, int target) {

//     if (i == n) {
//         return -1;
//     }

//     if (arr[i] == target) {
//         return i;
//     }

//     return searchTarget(arr, n, i + 1, target);
// }

// int main() {

//     int arr[] = {1, 2, 2, 2, 4, 5, 6};
//     int target = 2;
//     int i = 0;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int ans = searchTarget(arr, n, i, target);
//     cout << "Target IDX is " << ans << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int lastOccurance(int arr[], int n, int target, int i) {

//     if(i == n) {
//         return -1;
//     }

//     int idxfound = lastOccurance(arr, n, target, i + 1);

//     if(arr[i] == target && idxfound == -1) {
//         return i;
//     }

//     return idxfound;
// }

// int main () {

//     int arr[5] = {1, 2, 2, 2, 3};

//     int n = 5;
//     int target = 2;

//     int i = 0;

//     cout << "Last Occ : " << lastOccurance(arr, n, target, i) << endl;

//     return 0;

// }

// print x^n using recursion;

// #include<iostream>

// using namespace std;

// int calPow(int x, int n) {

//     if(n == 0) {
//         return 1;
//     }

//     return x * calPow(x, n-1);

// }

// int main () {

//     int x, n;

//     cout << "Enter the Value of X : ";
//     cin >> x;

//     cout << "Enter the Value of N : ";
//     cin >> n;

//     cout << "Answer is : " << calPow(x, n) << endl;

//     return 0;
// }

// optimized approach to calculate power using recursion;

// #include <iostream>

// using namespace std;

// int calPow(int x, int n) {

//     if( n == 0) {
//         return 1;
//     }

//     int half = calPow(x, n/2);

//     if(n % 2 != 0) {
//         return x * half * half;
//     }

//     return half * half;

// }

// int main()
// {

//     int x, n;

//     cout << "Enter the Value of X : ";
//     cin >> x;

//     cout << "Enter the Value of N : ";
//     cin >> n;

//     cout << "Answer is : " << calPow(x, n) << endl;

//     return 0;
// }

// trilling problem using recursion;

// #include<iostream>

// using namespace std;

// int trillingProblem(int n) {

//     if(n == 0 || n == 1) {
//         return 1;
//     }

//     return trillingProblem(n-1) + trillingProblem(n-2);

// }

// int main () {

//     int n = 5;

//     cout << trillingProblem(n) << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int sumOfSqr(int n) {

//     if(n == 1) {
//         return 1;
//     }

//     return n * n + sumOfSqr(n-1);
// }

// int main () {

//     int n;

//     cout << "Enter the No : ";
//     cin >> n;

//     cout << "Ans is : " << sumOfSqr(n) << endl;

//     return 0;
// }

// euclidian algoritham;

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 12;
//     int b = 18;

//     while (b != 0)
//     {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }

//     cout << "GCD = " << a << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;

//     return gcd(b, a % b);
// }

// int main()
// {
//     int a = 12;
//     int b = 18;

//     cout << gcd(a, b);

//     return 0;
// }

// #include<iostream>

// using namespace std;

// void removeDuplicate(string str, string ans, vector<int> &v, int n, int i) {


//     if(i == n) {
//         cout << ans << endl;
//         return;
//     }

//     if(v[i] == 1) {
//         removeDuplicate(str, ans, v, n,  i+1);
//     }

//     else {
//         ans += str[i];
//         v[i] = 1;
//     }

// }


// int main () {

//     string str = "appnna colllege";

//     string ans = "";

//     vector<int>v(26, 0);

//     int n = str.size();

//     int i = 0;

    
//     return 0;
// }

// recursion in array lecture 55;

// print array using recursion;

// #include<iostream>

// using namespace std;

// int main () {

    

//     return 0;
// }


// #include<iostream>

// using namespace std;

// void printArr(int arr[], int n, int i) {

//         if(i == n) {
//             return;
//         }
//         printArr(arr, n, i+1);
//         cout << arr[i] << endl;

//         return ;

// }

// int main () {

//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     int i = 0;

//     printArr(arr, n, i);



//     return 0;
// }

// #include<iostream>

// using namespace std;

// int sum(int arr[], int n, int i) {

//     if(i == -1) return 0;

//     return arr[i] + sum(arr, n, i-1);

// }

// int main () {

//     int arr[] = {1, 2, 3, 4, 5};

//     int n = 5;

//     int i = n-1;

//     cout << sum(arr, n, i) << endl;

//     return 0;

// }

// #include<iostream>

// using namespace std;

// int Minimum(int arr[],  int n, int i) {

//     if(i==n) return INT_MAX;

    
//     return min(arr[i], Minimum(arr, n, i+1));

// }


// int main () {

//     int arr[] = {7, 2, 1, 4, 6};

//     int n = 5;
//     int i = 0;
    

//     cout << "Min No :- " << Minimum(arr, n, i) << endl;


//     return 0;
// }


// recursion in array;

// #include<iostream>

// using namespace std;

// bool checkPalindrome(string str, int n, int i , int j) {

//     if(i >= j) {
//         return true;
//     }

//     if(str[i] != str[j]) return false;

//     return checkPalindrome(str, n, i+1, j-1);

// }

// int main () {

//     string str = "madom";
//     int n = str.size();
//     int i = 0;
//     int j = n-1;

//     cout << checkPalindrome(str, n, i, j) << "Your string palindrome" << endl;
    

//     return 0;
// }

// count vowels;

// #include<iostream>

// using namespace std;

// int countVowels(string str, int n, int i) {

//     if(i == n) return 0;

//     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//         return 1 + countVowels(str, n, i + 1);
//     }

//     else {
//           return  countVowels(str, n, i + 1);
//     }

// }

// int main () {

//     string str = "zaid";

//     int n = str.size();

//     int i = 0;


//     cout << "String Vowels are : " << countVowels(str, n, i) << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// void reverseStr(string &str, int n, int i, int j) {

//     if(i >= j) return;

//     swap(str[i], str[j]);

//     reverseStr(str, n, i+1, j-1);

// }



// int main () {

//     string str = "zaid";
//     int n = str.size();
//     int i = 0;
//     int j = n-1;


//     reverseStr(str, n, i, j);
    
//     cout << str << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// void lowerToCapital(string &str, int n, int i) {

//     if(i == n) return;

//     str[i] = 'A' + str[i] - 'a';


//     lowerToCapital(str, n, i+1);
// }

// int main () {

//     string str = "zaid";

//     int n = str.size();

//     int i = 0;

//     lowerToCapital(str, n, i);

//     cout << str << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool BinarySearch(int arr[], int n, int target, int st, int end) {

//     if (st > end) {
//         return false;
//     }

//     int mid = st + (end - st) / 2;

//     if (arr[mid] == target) {
//         return true;
//     }
//     else if (arr[mid] < target) {
//         return BinarySearch(arr, n, target, mid + 1, end);
//     }
//     else {
//         return BinarySearch(arr, n, target, st, mid - 1);
//     }
// }

// int main() {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int x = 4;

//     if (BinarySearch(arr, n, x, 0, n - 1))
//         cout << "Found";
//     else
//         cout << "Not Found";

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int searchInRotatedArray(int arr[], int st, int end, int target) {

//     if(st > end) return -1;

//     int mid = st + ( end - st ) / 2;

//     if(arr[mid] == target) {
//         return mid;
//     }

//     if( arr[st] <= arr[mid] ) { // line 1

//         if(arr[st] <= target && arr[end] >= target) {
//             return searchInRotatedArray(arr, st, mid-1, target);
//         }

//         else {
//             return (arr, mid+1, end, target);
//         }
//     }

//     else { // line 2;

//         if(arr[mid] <= target && arr[end] >= target) {

//             searchInRotatedArray(arr, mid+1, end, target);

//         }

//         else {
//             searchInRotatedArray(arr, st, mid-1, target);
//         }

//     }

// }

// int main () {

//     int arr[] = {4, 5, 6, 7, 0, 1, 2};

//     int n = 7;

//     int st = 0;
//     int end = n - 1;
//     int target = 0;

//     cout << "Your searching elem idx is : " << searchInRotatedArray(arr, st, end, target) << endl;

//     return 0;
// }

// print the subsequence;

#include<iostream>

using namespace std;

void subsequence(int arr[], int n, int i, vector<vector<int>>&ans, vector<int> &temp) {

    if( i == n ) {
        ans.push_back(temp);
        return;
    }

    // not include;
    subsequence(arr, n, i+1, ans, temp);

    // include;
    temp.push_back(arr[i]);
    subsequence(arr, n, i+1, ans, temp);
    temp.pop_back();

}

int main () {

    int arr[] = { 1, 2, 3 };

    int n = 3;

    vector<int> temp;
    vector<vector<int>> ans;

    int i = 0;

    subsequence(arr, n, i, ans, temp);

    for ( int i = 0; i < ans.size(); i++ ) {

        for ( int j = 0; j < ans[i].size(); j++ ) {

            cout << ans[i][j] << " ";

        }

        cout << endl;
    }

    cout << "Your ans size is :- " << ans.size() << endl;

    return 0;

}