// #include<iostream>
// using namespace std;

// int main () {

//     // int arr[5] = { 1, 2, 3, 4, 5};

//     // int size = sizeof(arr) / sizeof(arr[0]);

//     // for(int i = 0; i < size; i++) {

//     //     cout << arr[i] << " ";

//     // }

//     // int arr[5];

//     // int n = sizeof(arr) / sizeof(arr[0]);

//     // for(int i = 0; i < n; i++) {
//     //     cin >> arr[i];
//     // }

//     // for(int i = 0; i < n; i++) {

//     //     cout << arr[i] << " ";

//     // }

//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main () {

//     int arr[] = { 4, 5, 6, 1, 18, 2};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max = arr[0];
//     int min = arr[0];

//     for(int i = 1; i < n; i++ ){

//         if(arr[i] < min) {

//             min = arr[i];

//         }

//         if(arr[i] > max ) {
//             max = arr[i];
//         }

//     }

//     cout << "largest val" << max;
//     cout << "Min val " << min;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fun(int &value) {

//     value += 1;

//     return value;

// }

// int main () {

//     int val = 10;

//     int v1 = fun(val);
//     cout << v1 <<  " " ;
//     cout << val;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int searching(int arr[], int n, int key) {

//     for(int i = 0; i < n; i++) {
//         if(arr[i] == key) {
//             return i;
//         }

//     }
//     return -1;

// }

// int main () {

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 4;
//     int idx = searching(arr, n, key);
//     cout << "YOUR KEY IDX IS " << idx << " ";
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void reverseArr(int arr[], int n) {

//     int st = 0;
//     int end = n - 1;

//     while (st < end)
//     {
//         swap(arr[st], arr[end]);
//         st++;
//         end--;
//         /* code */
//     }

// }

// void printArr(int arr[], int n) {

//     for(int i = 0; i < n; i++) {
//         cout << arr[i];
//     }

// }

// int main () {

//     int arr[] = { 5, 4, 3, 2, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     reverseArr(arr, n);

//     printArr(arr, n);

//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key)
// {

//     int st = 0;
//     int end = n - 1;

//     while (st <= end)

//     {
//         int mid = st + (end - st) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         else if (arr[mid] < key)
//         {
//             st = mid + 1;
//         }

//         else
//         {
//             end = mid - 1;
//         }
//         /* code */
//     }

//     return -1;
// }

// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 6;

//     int idx = binarySearch(arr, n, key);

//     cout << "Your key searching key index is " << idx << " ";

//     cout << endl;

//     return 0;
// }
