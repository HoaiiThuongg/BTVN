#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    
    vector<vector<int>> arr(n);
    
    for(int i = 0;i<n;i++)
    {
        int k;cin >> k;
        
        for(int j = 0;j<k;j++)
        {
             int element;
            cin >> element;
            arr[i].push_back(element);
        }
    }
    
    while(q)
    {
        int a,b;cin>> a>> b;
        int res = arr[a][b];
        cout << res << endl;
        q--;
    }
}