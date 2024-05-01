#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        vec.push_back(k);
    }
    
    int m;cin >> m;
    
    vec.erase(vec.begin()+m-1);
    
    int o;
    cin >> k >> o;
    
    vec.erase(vec.begin()+k-1,vec.begin()+o-1);
    
    cout << vec.size()<<endl;
    for(int i = 0;i<vec.size();i++)
    {
        cout << vec[i]<<' ';
    }
    
    return 0;
}
