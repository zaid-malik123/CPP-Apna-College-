// longest substring without repeating char;

// brute force time complexity = o(n^3) space complexity = o(1)

// #include<iostream>

// using namespace std;


// int main () {

//     string s = "abac";

//     int n = s.length();
//     int maxLength = 0;

//     for(int i = 0; i < n; i++ ) {

//         for(int j = i; j < n; j++) {

//             int freq[256] = {0};
//             bool isValid = true;

//             for(int k = i; k <= j; k++) {

//                 if(freq[s[k]] == 1) {
//                     isValid = false;
//                     break;
//                 }

//                 else {
//                     freq[s[k]]++;
//                 }
                
//             }

//             if(isValid) {
//                 maxLength = max(maxLength, j - i + 1);
//             }

//             cout << endl;
//         }

        
//         cout << endl;
        
//     }

//     cout << "Max lenght is " << maxLength << endl;


//     return 0;
// }