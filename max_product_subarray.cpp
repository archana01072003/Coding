#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) 
{
        int maxi = INT_MIN;
        int prod = 1;

        for(int i = 0; i<nums.size(); i++)
        {
          prod  = prod * nums[i];
          maxi = max(prod,maxi);
          if(prod == 0)
           prod=1;
        }
        prod = 1;
        for(int i = nums.size()-1; i >= 0; i--)
        {
          prod = prod * nums[i];
          maxi = max(prod,maxi);
          if(prod == 0)
           prod = 1;
        }
        return maxi;
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
    cout << "The max. product subarray is : " << maxProduct(v) << endl;
}
