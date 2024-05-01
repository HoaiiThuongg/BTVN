#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,j;
    cin >> n;
    vector<int> vec;
    for(int i = 0;i<n;i++)
    {
        cin >> k;
        vec.push_back(k);
    }  
    
    cin >> k;
    for(int i =0 ;i<k;i++)
    {
        cin >> j;
        auto num = lower_bound(vec.begin(), vec.end(), j);
        
        if(*num != j)
        {
            cout <<"No "<< num - vec.begin() +1<<endl;
        }
        else 
        {
            cout <<"Yes "<<num - vec.begin() +1<<endl;
        }
        
    }
    return 0;
}