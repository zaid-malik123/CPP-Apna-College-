// #include<iostream>

// using namespace std;


// int main () {

//     int *ptr;

//     int a = 10;
//     ptr = &a;

//     cout << ptr << endl;

//     cout << *ptr << endl;

//     int b = 20;

//     ptr = &b;

//     cout << *ptr;

//     return 0;
// }

// pointers in array 2nd lecture;

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int *ptr = &arr[n-1];

//     // print the first index address;

//     // cout << arr << endl;

//     // cout << &arr[0] << endl;

//     // cout << arr+0 << endl;

//     // cout << ptr << endl;

//     // print the address of 1 first index;

//     // cout << arr + 1 << endl;
//     // cout << &arr[1] << endl;

//     // print the value of index;
//     // cout << arr[0] << endl;
//     // cout << *ptr << endl;
//     // cout << *(arr+0) << endl;
//     // cout << *arr << endl;

//     // print all array address;

//     // for(int i = 0; i < size; i++ ) {
//     //     cout << arr + i << endl;
//     // }

//     // print the all value in array;

//     // for(int i = 0; i < size; i++) {
//     //     cout << *(arr + i) << endl;
//     // }

//     // print the value using store the pointer address;

//     // for(int i =0 ; i < size; i++) {
//     //     // cout << ptr[i] << endl;
//     //     cout << *(ptr + i ) << endl;
//     // }

//     // arithmetic operators in pointers; ++, --;

//     // for(int i = 0; i < n; i++) {
//     //     cout << *ptr << endl;
//     //     ptr++; (ptr + 1)
//     // }

//     // for(int i = n-1; i >= 0; i--) {
//     //     cout << *ptr << endl;
//     //     ptr--;
//     // }

//     return 0;
// }