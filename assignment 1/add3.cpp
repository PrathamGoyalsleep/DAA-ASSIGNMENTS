#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v)
{
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    return mx + mn;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cout << f(v) << endl;
    }

    return 0;
}
