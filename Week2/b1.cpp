#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    string so = to_string(n);
    int cnt =0;
    for(char c :so)
    {
        if(c == '0') continue;
        int di = c - '0';
        if(n% di == 0) cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    
    while(n--)
    {
    	int k;
    	cin >> k;
    	cout <<findDigits(k)<<endl;
	}
}

