#include <bits/stdc++.h> 
using namespace std;
bool checkDiff(int *arr,int N,int K)
{
    sort(arr,arr+N);
    int i = 0, j= 1;
    while(j<N)
    {
        if(arr[j] - arr[i] == K)
        return true;
        else if(arr[j] - arr[i] > K)
        i++;
        else
        j++;
        if(i == j)
        j++;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    if(checkDiff(arr,n,k))
    {
        cout <<  "There exists two indices whose difference is : "<<k<<endl;
    }
    else
    cout <<  "There does not exists two indices whose difference is : "<<k<<endl;
}
