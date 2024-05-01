#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>arr,int start,int end,int find)
{
	int m = arr[(start+end)/2];
	
	cout << start<<' '<<end<<' ';
	if (start>end) return-1;
	if(start == end)
	{
		if(find == arr[end])
		{
			return end;
		}
		else return -1;
	}
	
	if(m == find) return (start+end)/2;
	
	if(m<find)
	{
		return binarySearch(arr,((start+end)/2 +1),end,find);
	}
	
	if(m>find)
	{
		return binarySearch(arr,start,((start+end)/2 -1),find);
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++)
	{
		int k;
		cin >> k;
		arr.push_back(k);
	}
	int f;cin >> f;
	cout << binarySearch(arr,0,n-1,f);
}