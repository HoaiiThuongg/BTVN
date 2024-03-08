#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) 
{
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if((ar[i] + ar[j])%k==0)
            {
                cnt++;
            }
        }
    }   
        return cnt;
}

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
    	cin >> arr[i];
	}
	
	cout << divisibleSumPairs(n,k,arr);
}

