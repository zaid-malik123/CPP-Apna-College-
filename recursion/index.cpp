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