#include <cmath>
#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> bangDiem;
    
    int n ;cin >> n;
    
    for(int i = 0;i<n;i++)
    {
        int type;string s;int mark;
        cin >>type>>s;
        if(type == 1)
        {
            cin >> mark;
            bangDiem[s] += mark;
        }
        else if (type == 2)
        {
            bangDiem.erase(s);
        }
        else if(type == 3)
        {
            cout << bangDiem[s]<<endl;
        }
        
        
    }
    return 0;
}