#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>&nums)
{
    unordered_map<int,int>mp;
    for(int i = 0; i<nums.size(); i++)
    mp[nums[i]]++;
    int val = 1;
    for(int i = 0; i<mp.size();i++)
    {
        if(mp.find(val) == mp.end())
        break;
        else
        val = val + 1;
    }
    return val;
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
    cout << "The first missing positive value is : "<<firstMissingPositive(v) << endl;
}
