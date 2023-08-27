#include <bits/stdc++.h>
using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int>v(n,0);
    for(int i = 0; i<n; i++)
    v[nums[i]-1]++;

    return v;
}
int main() {
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x;
    cin >> x;
    vector<int> res = countFrequency(n,x,v);
    for(int i  = 0; i<res.size();i++)
    {
        cout << res[i] << " ";
    }
}
