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

// #include<iostream>
// using namespace std;

// bool checkIsValid(int arr[], int k, int max_allocatedPages, int n) {

//     int stu = 1;
//     int pages = 0;

//     for(int i = 0; i < n; i++) {

//         if(arr[i] > max_allocatedPages) {
//             return false;
//         } 

//         if(arr[i] + pages <= max_allocatedPages) {
//            pages += arr[i]; 
//         }

//         else {
//             stu++;
//             pages = arr[i];
//         }

       
//     }
//     return stu > k ? false : true;


// }


// int main () {

//     int arr[] = {2, 1, 3, 4};
//     int k = 2;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;
//     int ans = -1;

//     for(int i = 0; i < n; i++ ) {
//         sum += arr[i];
//     }

//     int st = 0;
//     int end = sum;

//     while (st <= end)
//     {
//         /* code */
//         int mid = st + ( end - st ) / 2;
//         bool isValid = checkIsValid(arr, k, mid, n);

//         if(isValid) {

//             ans = mid;
//             end = mid - 1;

//         }

//         else {

//             st = mid + 1;

//         }

//     }
    
//     cout << "You Allocate Max Page Per Studend is " << ans << endl;
    

//     return 0;
// }