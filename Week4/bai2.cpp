#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int palindromeIndex(string s) {
    for(int i = 0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
        {
			if(s[i+1] != s[s.length()-1-i] || s[i+2] != s[s.length()-2-i])
            {
                return s.length()-1-i;
            }
            
            if(s[i] != s[s.length()-1-i-1] || s[i+1] != s[s.length()-3-i])
            {
                return i;
            }
            
        }
    }
    return -1;
}

int main()
{
	string s;
	cin >> s;
	int res =palindromeIndex(s);
	cout << res;
}