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


// efficient approach sliding window;

#include<iostream>

using namespace std;

int main () {

    vector<bool> count(256, 0);
    string s = "abac";
    int len = 0;

    int first = 0;

    int second = 0;

    while (second < s.size())
    {
        /* code */

        while (count[s[second]])
        {
            /* code */

            count[s[first]] = 0;
            first++;

        }

        count[s[second]] = 1;

        len = max(len, second - first + 1);
        second++;
        
    }

    cout << "Lenght is " << len << endl;
    
    return 0;
}