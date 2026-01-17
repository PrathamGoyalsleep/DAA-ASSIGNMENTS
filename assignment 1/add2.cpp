#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v)
{
    sort(v.begin(), v.end());
    int r = 0;
    int i = 0;
    for (i = 0; i < v.size(); i++)
    {
        if (abs(v[i] - v[r]) > 10)
            r++;
    }
    return abs(r - i);
}

int main()
{
    vector<int> v = {4,5,10,101,2,129,131,130,118,14};
    cout << f(v);
    return 0;
}