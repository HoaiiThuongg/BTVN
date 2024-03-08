#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

string caesarCipher(string s, int k) {
    for(int i = 0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
            {
                s[i] = (s[i] - 'A' + k)%26 +'A';
            }
            else 
            {
                s[i] = (s[i] - 'a' + k)%26 +'a';
            }
            
        }

    }
    return s;
}

int main()
{
    string s;int k;
    cin >> s>>k;
    cout <<caesarCipher(s,k);
}
