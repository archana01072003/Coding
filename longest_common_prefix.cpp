#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) 
{
    int res = strs[0].length();
    int n = strs.size();
    for(int i=1; i<n; i++)
    {
        int j = 0;
        while(j < strs[i].length() && strs[i][j]==strs[0][j])
        {
            j++;
        }
        res = min(res, j);
    }
    return strs[0].substr(0, res);
}
int main() {
    int n;
    cin >> n;
    vector<string>strs;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    cout << "The longest common prefix is : "<<longestCommonPrefix(strs)<<endl;
}
