#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int cnt = 1;
    for(char c: s)
    {
        if(isupper(c))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string s;
    cin >> s;
    cout <<camelcase(s);
}
