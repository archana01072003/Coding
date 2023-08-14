#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int> nums) 
{
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size();i++)
        mp[nums[i]]++;
        for(auto i:mp)
        {
            if(i.second == 1)
            v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        return v;
}
int main() {
    int n;
    cin >> n;
    vector<int>v;
    for(int i= 0; i<n ;i++)
    {
        int x ;
        cin >> x;
        v.push_back(x);
    }
    vector<int>res = singleNumber(v);
    for(int i = 0; i<res.size();i++)
    cout<< res[i] << " ";
}
