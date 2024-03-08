#include <bits/stdc++.h>

using namespace std;

string balancedSums(vector<int> arr) {
    int sumL=0,sumArr = arr.size() ;
    int sumR = 0;
    for(int i = 0;i<sumArr;i++)
    {
        sumR+=arr[i];
    }
    
    
    for(int j = 0;j<sumArr;j++)
    {
        sumR-=arr[j];
        if(sumR==sumL) return "YES";
        sumL+=arr[j];
    }
    return "NO";
}


int main()
{
    int n;
    cin >> n;
    
    while(n--)
    {
    	int k;
    	cin >> k;
    	vector<int> vec(k);
    	for(int i = 0;i<k;i++)
    	{
    		cin >> vec[i];
		}
		cout <<balancedSums(vec);
	}
}
