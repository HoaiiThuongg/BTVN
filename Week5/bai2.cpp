#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int k;
    vector<int> vec;
    for(int i = 0;i<n;i++)
    {
        cin >> k;
        vec.push_back(k);
    } 
    
    sort(vec.begin(),vec.end());
    for(int i = 0;i<n;i++)
    {
        cout << vec[i]<<' ';
    }
     
    return 0;
}