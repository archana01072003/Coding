#include <bits/stdc++.h>
using namespace std;
int sumOfMinMax(int n, vector<int>v)
{
    sort(v.begin(),v.end());
    return (v[0] + v[n-1]);
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
    cout << "The sum of max. and min. element of an array is : "<<sumOfMinMax(n,v)<<endl;
}
