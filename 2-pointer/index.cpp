#include<iostream>

using namespace std;

int main () {

    int arr[] = { 1, 1, 1, 2, 2, 3, 3, 3, 4 };

    int n = 9;

    int i = 0;

    int j = 1;

    while (j < n)
    {
        /* code */

        if( arr[j] == arr[j-1] ) {

            j++;
            continue;

        }

        else {

            swap(arr[i+1], arr[j]);
            i++;

        }
    }

    for ( int k = 0; k < n; k++ ) {
        cout << arr[k] << " ";
    }

    cout << endl;

    return 0;

}

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int arr[] = {-1, -1, 0, 1, 2, 4};

    int n = 6;
    int sum = 0;

    vector<vector<int>> ans;

    for (int i = 0; i < n - 2; i++) {

        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {

            int total = arr[i] + arr[left] + arr[right];

            if (total == sum) {

                ans.push_back({
                    arr[i],
                    arr[left],
                    arr[right]
                });

                left++;
                right--;

                while (left < right &&
                       arr[left] == arr[left - 1]) {
                    left++;
                }

                while (left < right &&
                       arr[right] == arr[right + 1]) {
                    right--;
                }
            }

            else if (total < sum) {

                left++;
            }

            else {

                right--;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {

        for (int j = 0; j < ans[i].size(); j++) {

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    int arr[] = {-1, 2, 1, -4};

    int n = 4;

    int target = 1;

    sort(arr, arr + n);

    int ansSum = 0;

    int minDiff = INT_MAX;

    for (int i = 0; i < n - 2; i++)
    {

        int left = i + 1;

        int right = n - 1;

        while (left < right)
        {

            int sum = arr[i] + arr[left] + arr[right];

            int diff = abs(sum - target);

            if (diff < minDiff)
            {
                minDiff = diff;
                ansSum = sum;
            }

            if (sum == target)
            {
                return sum;
            }

            else if (sum > target)
            {

                right--;
            }

            else
            {
                left++;
            }
        }
    }

    cout << "Your Ans is :- " << ansSum << endl;

    return 0;
}