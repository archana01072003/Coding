#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) 
{
        int sum = 0,maxSum = nums[0];
        for(int i = 0 ; i<nums.size() ; i++)
        {
            sum = sum+nums[i];
            maxSum = max(maxSum,sum);
            if(sum<0)
            {
                sum = 0;
            }  
        }
        return maxSum;
}
 
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout<<"The maxSubarray sum is : "<<maxSubArray(arr)<<endl;
 
    return 0;
}
