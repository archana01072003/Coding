#include <iostream>
using namespace std;
int nthFibonacci(int n)
{
        int dp[n];
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i<n; i++)
        {
            dp[i] = (dp[i-1] + dp[i-2])%1000000007;
        }
        return dp[n-1]%1000000007;
    }
int main() {
    int n;
    cin >> n; 
    cout << "The "<<n<<"th fibonacci number is : "<<nthFibonacci(n) << endl;
}
