#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) 
    {
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}
int main()
{
	int n;
    cin >> n;
    int arr[n];
    //the value in array must be sorted
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
	int x ;
    cin >> x;
	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1)
    cout << "Element is not present in array"<<endl;
    else
    cout << "Element is present at index " << result << endl;
	return 0;
}
