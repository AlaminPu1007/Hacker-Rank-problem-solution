#include <bits/stdc++.h>
using namespace std;

int arr[1000000];
typedef long long int LLI;

int main(void)
{
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    LLI ans = 0;
    for (int i = 0; i < N; i++)
        ans += (LLI)(i + 1) * arr[i];

    LLI best = ans;

    for (int i = 0; i < N; i++)
    {
        ans -= sum;
        ans += (LLI)(N)*arr[i];
        best = max(best, ans);
    }
    cout << best << endl;

    return 0;
}