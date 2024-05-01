#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    cin >> Q;
    
    set<int> luu;
    
    for(int i = 0;i<Q;i++)
    {
        int y,x;
        cin >> y >> x;
        if(y ==1)
        {
            luu.insert(x);
        }
        else if(y==2)
        {
            luu.erase(x);
        }
        else if(y ==3)
        {
            if(luu.find(x) != luu.end()) 
            {
                cout <<"Yes"<<endl;
            }
            else cout <<"No"<<endl;
        }
    } 
    return 0;
}
