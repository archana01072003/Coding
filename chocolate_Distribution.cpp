#include <bits/stdc++.h>
using namespace std;
long long chocolateDistribution(vector<long long >v,long long  n, long long m)
{
        sort(v.begin(),v.end());
        long long result = v[m-1] - v[0];
        for(int i = m; i<n; i++)
        {
            result = min(result,(v[i] - v[i-m+1]));
        }
        return result;
}
int main() {
    cout<<"Hello Github!" << endl;
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long>v;
        long long a;
        for(long long i = 0; i<n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        long long m;
        cin >> m;
        cout << chocolateDistribution(v,n,m)<< endl;
    }
}
