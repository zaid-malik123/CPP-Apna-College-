// #include<iostream>

// using namespace std;

// void printSubArray(int arr[], int n) {

//     for(int i = 0; i < n; i++) {

//         for(int j = i; j < n; j++) {
//             // cout << "(" << i << " , " << j << " )";

//             for(int k = i; k < j; k++ ) {
//                 cout << arr[k] << " ";
//             }

//             cout << ",";
//         }

        

//         cout << endl;
//     }



// }

// int main () {

//     int arr[5] = { 1, 2, 3, 4, 5};

//     int n = 5;

//     printSubArray(arr, n);

//     return 0;
// }


// #include<iostream>

// using namespace std;

// int maxSubArray(int arr[], int n) {

//     int maxVal = INT_MIN;

//     for(int i = 0; i < n; i++ ){

//         for(int j = i; j < n; j++) {

//             int subArraySum = 0;

//             for(int k = i; k <= j; k++) {

//                 subArraySum += arr[k];

//             }

//             maxVal = max(subArraySum, maxVal);

//             // cout << subArraySum << " ";
//         }

//         cout << endl;
//     }

//     return maxVal;
// }


// int main () {

//     int arr[] = {2, -3, 6, -5, 4, 2};
//     int n = 6;

//     int result = maxSubArray(arr, n);

//     cout << "This is your ans " << result << endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int maxSubArray(int arr[], int n) {

//     int maxVal = INT_MIN;

//     for(int i = 0; i < n; i++ ){

//         int subArray = 0;

//         for(int j = i; j < n; j++) {

//             subArray += arr[j];
//         }

//         maxVal = max(subArray, maxVal);

//         cout << endl;
//     }

//     return maxVal;
// }


// int main () {

//     int arr[] = {2, -3, 6, -5, 4, 2};
//     int n = 6;

//     int result = maxSubArray(arr, n);

//     cout << "This is your ans " << result << endl;

//     return 0;
// }

// best buy and sell stock
// #include<iostream>
// using namespace std;

// int main () {

//     int arr[] = { 7, 1, 5, 3, 6, 4};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int best_buy = arr[0];
//     int max_profit = 0;

//     for(int i = 0; i < n; i++) {

//         if(arr[i] > best_buy) {
//             max_profit = max(max_profit, arr[i] - best_buy);
//         }

//         best_buy = min(best_buy, arr[i]);
//     }

//     cout << "MAX STOCK PROFIT IS " << max_profit << endl;


//     return 0;
// }

// #include<iostream>

// using namespace std;


// int main () {

//     int arr[] = { 4, 2, 0, 6, 3, 2, 5};

//     int n = sizeof(arr) / sizeof(arr[0]);
//     int trappedWater = 0;

//     int leftMax[n];
//     int rightMax[n];

//     leftMax[0] = arr[0];
//     rightMax[n-1] = arr[n-1];

//     for(int i = 1; i < n; i++) {

//         leftMax[i] = max(leftMax[i-1], arr[i ]);
//     }

//     for(int i = n-2; i >= 0; i--) {
//         rightMax[i] = max(rightMax[i+1], arr[i]);
//     }

    

//     for(int i = 0; i < n; i++) {
        
//         int minMax = min(leftMax[i], rightMax[i]);

//         trappedWater += minMax - arr[i];

//     }

//     cout << "Trapped Water is " << trappedWater << endl;


//     return 0;
// }