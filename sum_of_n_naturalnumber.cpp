#include <iostream>
using namespace std;
int sumOfnNaturalNumber(int n)
{
    return (n*(n+1))/2;
}
int main() {
    int n;
    cin >> n;
    cout << "The sum of "<<n << " natural no. is : "<<sumOfnNaturalNumber(n)<<endl;
}
