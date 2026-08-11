#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int st, int end, int mid)
{

    int i = st;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= end)
    {
        /* code */

        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    int idx = 0;

    for (int i = st; i <= end; i++)
    {
        arr[i] = temp[idx++];
    }
}

void merge_sort(int arr[], int st, int end)
{

    if (st >= end)
        return;

    int mid = st + (end - st) / 2;

    merge_sort(arr, st, mid); // left break;

    merge_sort(arr, mid + 1, end); // right break;

    merge(arr, st, end, mid);
}

int main()
{

    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    int st = 0;
    int end = n - 1;

    merge_sort(arr, st, end);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}