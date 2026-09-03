// backtracking :- Function return karta hai, aur return hone se pehle/baad hum state ko undo (edit) karte hain, taaki next choice try kar sakein.


// #include<iostream>

// using namespace std;

// void printArr(int arr[], int n) {

//     for ( int i = 0; i < n; i++ ) {
//         cout << arr[i] << endl;
//     }

// }

// void backEx( int arr[], int n, int i) {

//     if ( i == n ) {
//         return;
//     }


//     arr[i] = i + 1;

//     backEx(arr, n, i+1);

//     arr[i] = arr[i] - 1;

// }

// int main () {

//     int arr[5];

//     int n = 5;

//     backEx(arr, n, 0);

//     printArr(arr, n);

//     return 0;

// }

// subsets;

// #include<iostream>

// using namespace std;

// void subset( string str, int n, int i, string &temp, vector<string> &ans) {

//     if ( i == n ) {

//         ans.push_back(temp);

//         return;

//     }

//     // yes choice;

//     temp.push_back(str[i]);
//     subset( str, n, i+1, temp, ans );
//     temp.pop_back();

//     // no choice;
//     subset( str, n, i+1, temp, ans );

// }

// int main () {

//     string str = "abc";

//     int n = str.size();

//     int i = 0;

//     string temp;

//     vector<string> ans;

//     subset( str, n, i, temp, ans );


//     for ( int i = 0; i < ans.size(); i++ ) {

//         cout << ans[i] << endl;

//     }

//     return 0;

// }

// find string permutations;

// #include <iostream>
// #include <vector>
// using namespace std;

// void findPermutations(string str, int n, string &temp, vector<string> &ans) {

//     if (temp.size() == n) {
//         ans.push_back(temp);
//         return;
//     }

//     for (int i = 0; i < str.size(); i++) {

//         string nextStr = str.substr(0, i) + str.substr(i + 1);

//         temp += str[i];

//         findPermutations(nextStr, n, temp, ans);

//         temp.pop_back();
//     }
// }

// int main() {

//     string str = "abc";
//     int n = str.size();

//     string temp;
//     vector<string> ans;

//     findPermutations(str, n, temp, ans);

//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << endl;
//     }

//     return 0;
// }