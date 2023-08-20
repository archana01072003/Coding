#include <bits/stdc++.h>
using namespace std;
int countOccurance(int arr[], int n, int x)
{
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == x)
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++)
    cin >> arr[i];
    int x ; 
    cin >> x;
    int res = countOccurance(arr, n, x);
    cout << res << endl;
    return 0;
}
