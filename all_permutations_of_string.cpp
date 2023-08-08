#include <bits/stdc++.h>
using namespace std;
void permute(string& a, int s, int e)
{
	if (s == e)
		cout << a << endl;
	else
     {
		for (int i = s; i <= e; i++) 
        {
			swap(a[s], a[i]);
			permute(a, s + 1, e);
			swap(a[s], a[i]);
		}
	}
}
int main()
{
	string str ;
    cin >> str;
	permute(str, 0, str.size()-1);
	return 0;
}

