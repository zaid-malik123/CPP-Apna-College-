// // declare 2d array and traverse 2d array;

// // int arr[3][5];  first value is row val and sec is col val;

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[3][2] = { {5, 10}, {15, 20}, {25, 30}};

//     int n = 3;
//     int m = 2;

//     for(int i = 0; i < n; i++) {

//         for(int j = 0; j < m; j++) {

//             cout << arr[i][j] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// spiral matrix;

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    
//     int n = 4;
//     int m = 4;

//     int srow = 0;
//     int erow = n - 1;
//     int scol = 0;
//     int ecol = m - 1;

    

//     while (srow <= erow && scol <= ecol)
//     {
//         /* code */

//         // top;
//         for(int i = scol; i <= ecol; i++) {
//             cout << arr[srow][i] << " ";
//         }

//         // right
//         for(int j = srow+1; j <= erow; j++) {
//             cout << arr[j][ecol] << " ";
//         }

//         // bottom;

//         for(int i = ecol-1; i >= scol; i-- ) {
//             cout << arr[erow][i] << " ";
//         }

//         //left;

//         for(int i = erow-1; i >= srow+1; i--) {
//             cout << arr[i][scol] << " ";
//         }

//         srow++;
//         scol++;
//         ecol--;
//         erow--;
//     }
    

//     return 0;
// }

// sum of diagnol matrix;

// #include<iostream>

// using namespace std;

// int main () {

//     int arr[4][4] = {
//                         {1, 2, 3, 4},
//                         {5, 6, 7, 8},
//                         {9, 10, 11, 12},
//                         {13, 14, 15, 16}
//                     };

    
//     int n = 4;
//     int sum = 0;

//     for(int i = 0; i < n; i++) {

//         sum += arr[i][i];

//         if(i != n-i-1) {
//             sum+= arr[i][n-i-1];
//         }
//     }

//     cout << "sum  = " << sum << endl;
//     return 0;
// }

// search in 2d array;

// #include<iostream>

// using namespace std;


// int main () {

//     int arr[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };

//     int n = 4;
//     int m = 4; 
//     int key = 11;

//     int i = 0;
//     int j = m-1;

//     int cell = arr[0][m-1];

//     while (i < n && j >= 0 )
//     {
//         /* code */

//         if(arr[i][j] == key) {
//             cout << "found the value at idx ( " << i << "," << j <<" )";
//             break;
//         }

//         else if(arr[i][j] < key) {
//             i++;
//         }

//         else {
//             j--;
//         }
//     }

//     cout << "Not found" << endl;

//     return 0;
// }