#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    int cnt = 0;
    
    for(int i = a[a.size()-1];i<=b[0];i++)
    {
    	bool isYou = true;
        for(int j = 0;j<a.size();j++)
        {
            if(i%a[j] !=0)
            {
            	isYou = false;
                break;
            }
        }
        
        if(isYou)
        {
	        for(int j = 0;j<b.size();j++)
	        {
	            if(b[j]%i!=0)
	            {
	            	isYou = false;
	                break;
	            }
	        }
    	}
        
        if(isYou)
        { 
        	cnt++;
		}
 
    }
    return cnt;
}


int main()
{
    
    vector<int> a = {2,6};
    vector<int> b = {24,36};
    
    int res = getTotalX(a,b);
    
    cout << res;
}