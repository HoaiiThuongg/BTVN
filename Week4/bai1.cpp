#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int equalizeArray(vector<int> arr) {
    int x1 = arr[0],y1 = 0,x2,y2;
    
    for(int i = 0;i<arr.size();i++)
    {
        if(arr[i]!=-10)
        {
            x2 = arr[i]; y2 = 1;
            for(int j = i+1;j<arr.size();j++)
            {
                if (arr[j] == x2)
                {
                    y2++;
                    arr[j] = -10;
                }
            }
            if (y2>y1)
            {
                x1 = x2;
                y1 = y2;
            }
        }
    }
    
    return arr.size() - y1;
}

int main()
{
	vector<int> arr = {1,2,3,2,4,1,2,2};
	int res = equalizeArray(arr);
	
	cout << res;
}