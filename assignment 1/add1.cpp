#include <bits/stdc++.h>
using namespace std;

bool candivide(vector<int> v, int m, int mid)
{
    int seg = 1;
    int curr = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((curr | v[i]) <= mid)
        {
            curr = curr | v[i];
        }
        else
        {
            seg = seg + 1;
            curr = v[i];
            if (seg > m)
                return false;
        }
    }
    return true;
}

int f(vector<int> v, int m)
{
    int n = v.size();
    int low = *max_element(v.begin(), v.end());
    int high=0;
    for (int i = 0; i < n; i++)
    {
        high |= v[i];
    }
    int ans = high;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (candivide(v, m, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    int m = 2;
    cout<<f(v, m);
}