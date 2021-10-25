#include <bits/stdc++.h>

using namespace std;

int maxChunksToSorted(vector<int> &arr)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
        if (maxi == i)
        {
            cnt++;
        }
        // cout << cnt << endl;
        // cout << maxi << " " << i << endl;
    }

    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << maxChunksToSorted(v) << endl;
    return 0;
}