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