
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, value = 0;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }

    int len = arr.size();

    for (int i = 1; i < len; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;

            for (int k = 0; k < len; k++)
                cout << arr[k] << " ";

            cout << endl;
        }
        arr[j + 1] = key;
    }

    for (int k = 0; k < len; k++)
        cout << arr[k] << " ";

    cout << endl;

    return 0;
}