#include <bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>arr, int n) 
{
        long sum = accumulate(arr.begin(),arr.end(),0);
        long originalSum = (n*(n+1))/2;
        return originalSum - sum;
}
int main() {
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i<n-1; i++)
    {
       int x;
       cin >> x;
       arr.push_back(x);
    }
    cout << MissingNumber(arr,n) << endl;
}
