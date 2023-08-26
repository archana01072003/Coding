#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    vector<bool> visited(n + 1);
    for (int i: arr)
    {
        if (visited[i]) {
            return i;
        }
        visited[i] = true;
    }
    return -1;
}
 
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "The duplicate element is " << findDuplicate(arr);
 
    return 0;
}
