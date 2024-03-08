#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

string hackerrankInString(string s) {
    char h[10] = {'h','a','c','k','e','r','r','a','n','k'};
    
    int k = 0;
    int i = 0;
    while(i<s.length())
    {
        if(s[i] != 'h' && s[i] != 'a'&&s[i] != 'c'&&s[i] != 'k'&&s[i] != 'e'&&s[i] != 'r'
            &&s[i] != 'n')
            {
                i++;
                continue;
            }
        if(i==s.length() || k == 10) break;
        while(s[i] != h[k] && i!=s.length())
        {
            i++;
        }   
        k++;
        i++;
            
    }
    
    if(k == 10 ) return "YES";
    return "NO";

}

int main()
{
    string s;
    cin >> s;
    cout <<hackerrankInString(s);
}
