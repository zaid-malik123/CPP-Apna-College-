// peak element

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[] = {2, 4, 6, 8, 10, 8, 5};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int peakElement = -1;

//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         /* code */

//         int mid = start + (end - start) / 2;

//         if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid +1]) {
//             peakElement = arr[mid];
//             break;
//         }

//         else if(arr[mid] > arr[mid - 1]) {
//             start = mid + 1;
//         }

//         else {
//             end = mid - 1;
//         }
//     }

//     cout << "Peak Element is " << peakElement << endl;
    

//     return 0;
// }


// minimum value in rotated array;

// #include<iostream>
// using namespace std;

// int main () {

//     int arr[] = {6, 8, 10, 2, 4};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int st = 0;
//     int end = n - 1;
//     int ans = -1;

//     while (st <= end)
//     {
//         /* code */

//         int mid = st + ( end - st ) / 2;


//         if(arr[mid] >= arr[0]) {

//             // left sorted

//             st = mid + 1;

//         }

//         else {

//             ans = mid;
//             end = mid - 1;

//             // right sorted
//         }
//     }

//     cout << "MIN ELEMENT IS " << ans << endl;
    

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[] = {2, 3, 4, 7, 11, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 5;

//     int st = 0;
//     int end = n - 1;
//     int ans = n;

//     while (st <= end)
//     {
//         /* code */

//         int mid = st + (end - st) / 2;

//         if(arr[mid] - (mid+1) < k) {

//             st = mid + 1;

//         }

//         else {
//             ans = mid;
//             end = mid - 1;
//         }
//     }

//     cout << "Missing +ve Int no is " << ans + k;
    

//     return 0;
// }