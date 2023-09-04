#include <bits/stdc++.h>
using namespace std;
int kthLargestElement(vector<int>v, int k)
{
    sort(v.begin(),v.end(),greater<int>());
    return v[k-1];
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
    int k;
    cin >> k;
    cout<<"The "<<k<<" largest element in the array is : "<<kthLargestElement(v,k)<<endl;
}
