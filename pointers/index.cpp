// // #include<iostream>

// // using namespace std;


// // int main () {

// //     int *ptr;

// //     int a = 10;
// //     ptr = &a;

// //     cout << ptr << endl;

// //     cout << *ptr << endl;

// //     int b = 20;

// //     ptr = &b;

// //     cout << *ptr;

// //     return 0;
// // }

// // pointers in array 2nd lecture;

// // #include<iostream>

// // using namespace std;

// // int main () {

// //     int arr[5] = {1, 2, 3, 4, 5};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     int *ptr = &arr[n-1];

// //     // print the first index address;

// //     // cout << arr << endl;

// //     // cout << &arr[0] << endl;

// //     // cout << arr+0 << endl;

// //     // cout << ptr << endl;

// //     // print the address of 1 first index;

// //     // cout << arr + 1 << endl;
// //     // cout << &arr[1] << endl;

// //     // print the value of index;
// //     // cout << arr[0] << endl;
// //     // cout << *ptr << endl;
// //     // cout << *(arr+0) << endl;
// //     // cout << *arr << endl;

// //     // print all array address;

// //     // for(int i = 0; i < size; i++ ) {
// //     //     cout << arr + i << endl;
// //     // }

// //     // print the all value in array;

// //     // for(int i = 0; i < size; i++) {
// //     //     cout << *(arr + i) << endl;
// //     // }

// //     // print the value using store the pointer address;

// //     // for(int i =0 ; i < size; i++) {
// //     //     // cout << ptr[i] << endl;
// //     //     cout << *(ptr + i ) << endl;
// //     // }

// //     // arithmetic operators in pointers; ++, --;

// //     // for(int i = 0; i < n; i++) {
// //     //     cout << *ptr << endl;
// //     //     ptr++; (ptr + 1)
// //     // }

// //     // for(int i = n-1; i >= 0; i--) {
// //     //     cout << *ptr << endl;
// //     //     ptr--;
// //     // }

// //     return 0;
// // }

// // lecture 3 pointers;


// // #include<iostream>

// // using namespace std;

// // int main() {

// //     char ch[] = "abcd";

// //     cout << ch << endl;   // Prints: abcd not print the pointer;

// //     char *ptr = ch;

// //     cout << ptr << endl;  // Prints: abcd same as;

// //     // if we print the pointer so as

// //     // cout << (void*) ch << endl;
// //     // cout << (void*) ptr << endl;

// //     // traverse the pointers;

// //     // for(int i = 0; i < strlen(ch); i++ ) {
// //     //     cout << (void*) (ptr + i) << endl;
// //     // }

// //     // for(int i = 0; i < strlen(ch); i++) {
// //     //     cout << static_cast<void*>(ptr + i) << endl;
// //     // }

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // void swapTheValue(int *val1, int *val2) {

// //     int temp = *val2;

// //     *val2 = *val1;
// //     *val1 = temp;

// // }

// // int main () {

// //     int first = 10;
// //     int second = 20;

// //     swapTheValue(&first, &second);

// //     cout << first << " " << second << endl;

// //     return 0;
// // }

// #include<iostream>

// using namespace std;

// // void swapping(int &num1, int &num2) {

// // int temp = num2;

// // num2 = num1;

// // num1 = temp;

// // }

// // void plusOne(vector<int> *v1) {
// //     for(int i = 0; i < (*v1).size(); i++) {
// //         (*v1)[i] = 1;
// //     }
// // }

// // void plusOne(vector<int> &v) {
// //     for(int i = 0; i < v.size(); i++) {
// //         v[i] = 1;
// //     }
// // }

// // void plusOne(int arr[]) {

// //     for(int i = 0; i < 5; i++) {
// //         arr[i] = 1;
// //     }

// // }

// // int main () {

//     // int num1 = 10;
//     // int num2 = 20;

//     // int &ref = num;

//     // ref += 20;

//     // cout << num << endl;

//     // swapping(num1, num2);

//     // cout << num1 << " " << num2 << endl;

//     // vector<int>v(5,0);
//     // plusOne(v);

//     // for(int i = 0; i < v.size(); i++) {
//     //     cout << v[i] << endl;
//     // }

// //     int arr[5] = {1, 2, 3, 4, 5};
    
// //     int n = 5;

// //     plusOne(arr);

// //     for(int i = 0; i < 5; i++) {
// //         cout << arr[i] << endl;
// //     }

// //     return 0;
// // }

// // lecture 4;

// // #include<iostream>

// // using namespace std;

// // void fun(int **ptr1) {

// //     *ptr1 = *ptr1 + 1;

// // }


// // int main () {

// //     int n = 10;

// //     int *ptr = &n;

// //     cout << "After ptr value " << ptr << endl;
// //     int **p = &ptr;


// //     fun(p);

// //     cout << "Before ptr value " << ptr << endl;

// //     return 0;

// // }

// // #include<iostream>


// // using namespace std;

// // void fun(int* &ptr) {
// //     ptr++;
// // }

// // int main () {

// //     int n = 10;

// //     int *ptr = &n;

// //     cout << "Before function call ptr value " << ptr << endl;

// //     fun(ptr);

// //     cout << "After function call ptr value " << ptr << endl;

// //     return 0;
// // }

// // #include<iostream>

// // using namespace std;

// // int main () {

// //     int n = 10;

// //     int *p1 = &n;
// //     int **p2 = &p1;
// //     int ***p3 = &p2;

// //     ***p3 = 15;

// //     cout << n << endl;

// //     return 0;
// // }

// lecture 5 pointers

// #include<iostream>

// using namespace std;

// int main () {

//     // variable ko heap memory me store karna hia;

//     // int *ptr = new int;

//     // float *ptr1 = new float;

//     // *ptr = 5;
//     // *ptr1 = 1.4;

//     // cout << *ptr << endl;
//     // cout << *ptr1 << endl;

//     // int n;

//     // cout << "Enter the array size : " << endl;

//     // cin >> n;

//     // int *ptr = new int[n];

//     // cout << ptr << endl;
//     // return 0;
// }