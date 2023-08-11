#include <iostream>
using namespace std;
void subarraySum(int arr[],int n, int sum)
{
    for (int i = 0; i < n; i++) 
    {
        int currentSum = arr[i];
        if (currentSum == sum) 
        {
            cout << "Sum found at indexe " << i << endl;
            return;
        }
        else 
        {
            for (int j = i + 1; j < n; j++) 
            {
                currentSum += arr[j];
                if (currentSum == sum) 
                {
                    cout << "Sum found between indexes "
                         << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout <<"No subarray found";
    return;
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
    subarraySum(arr,n,k);
}
