#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    int newN = 0 ;
    int temp = n;
    while(temp!=0)
    {
        newN = newN*10 + (temp%10);
        temp = temp/10;
    }
    if(newN == n)
    return true;
    return false;
}
int main() {
   int n;
   cin >> n;
   if(isPalindrome(n))
   cout << n << " is palindrome";
   else
   cout << n<<" is not palindrome";
}
