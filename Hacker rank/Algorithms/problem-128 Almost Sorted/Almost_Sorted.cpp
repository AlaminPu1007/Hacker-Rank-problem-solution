#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void almostSorted(vector<int> arr)
    {
        int len = arr.size();
        int left = -1, right = -1;
        vector<int> copyArr = arr;

        // sort original array
        sort(copyArr.begin(), copyArr.end());
        // identifying the left and right indices,
        for (int i = 0; i < len; i++)
        {
            if (arr[i] != copyArr[i])
            {
                if (left == -1)
                    left = i;
                else
                    right = i;
            }
        }
        // trying to swap arr[left] with arr[right]
        swap(arr[left], arr[right]);

        // whether the swap operation can return an sorted array or not;

        bool canSwap = true;

        for (int i = left; i <= right; i++)
        {
            if (arr[i] != copyArr[i])
            {
                canSwap = false;
                swap(arr[left], arr[right]);
                break;
            }
        }

        if (canSwap == true)
        {
            cout << "yes" << endl;
            cout << "swap " << left + 1 << " " << right + 1 << endl;
            return;
        }
        // if the swap operation cannot return the sorted array, then trying to reverse from left to right;
        reverse(arr.begin() + left, arr.begin() + right + 1);

        for (int i = left; i <= right; i++)
        {
            if (arr[i] != copyArr[i])
            {
                cout << "no" << endl;
                return;
            }
        }
        cout << "yes" << endl;
        cout << "reverse " << left + 1 << " " << right + 1 << endl;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 5, 4, 3, 2, 6};
    obj.almostSorted(arr);
    return 0;
}