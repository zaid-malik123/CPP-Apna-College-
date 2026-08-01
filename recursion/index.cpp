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