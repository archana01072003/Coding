#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) 
{
        stringstream str(s);
        string word;
        string res = "";
        while(str >> word){
            res = word + " " + res;
        }
        res.pop_back();
        return res;
    }
int main() {
    string s;
    getline(cin,s);
    cout << reverseWords(s) << endl;
}
