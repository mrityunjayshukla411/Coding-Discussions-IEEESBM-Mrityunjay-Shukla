#include <bits/stdc++.h>

using namespace std;

bool solution(vector<long long int> A, vector<long long int> P, long long int B, long long int E)
{
    vector<pair<long long int, long long int>> v(A.size());
    for (long long int i = 0; i < P.size(); i++)
    {
        v[i] = make_pair(P[i] - A[i] > 0 ? P[i] - A[i] : 0, P[i] + A[i]);
        cout << "Loop1" << endl;
    }
    // cout<<"Hello"<<endl;
    sort(v.begin(), v.end());
    if (B > E)
    {
        for (long long int i = P.size() - 1; i >= 0; i--)
        {
            cout << "B:- " << B << endl;
            if (v[i].second >= B && v[i].first < B)
            {
                B = v[i].first > E ? v[i].first : E;
            }
            if (B == E)
            {
                cout << "B:- " << B << endl;
                return true;
            }
        }
    }
    else if (B < E)
    {
        for (long long int i = 0; i < P.size(); i++)
        {
            cout << "B:- " << B << endl;
            if (v[i].first <= B && v[i].second > B)
            {
                B = v[i].second < E ? v[i].second : E;
            }
            if (B == E)
            {
                cout << "B:- " << B << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    long long int n, b, e;
    cin >> n;
    vector<long long int> A(n);
    vector<long long int> P(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (long long int i = 0; i < n; i++)
    {
        cin >> P[i];
    }
    cin >> b >> e;
    if (solution(A, P, b, e))
    {
        cout << "Works";
    }
    else
        cout << "Doesn't work" << endl;

    return 0;
}