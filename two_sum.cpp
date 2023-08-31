#include <bits/stdc++.h>
using namespace std;
bool twoSum(vector<int>v, int k)
{
    for(int i = 0; i<v.size()-1; i++)
    {
        for(int j = i+1; j<v.size(); j++)
        {
            if(v[i] + v[j] == k)
            return true;
        }
    }
    return false;
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
    if(twoSum(v,k))
    {
        cout << "The pair is present in the array whose sum is : " <<k<<endl;
    }
    else
    {
        cout << "The pair is not present in the array whose sum is : " <<k<<endl;
    }
}
