#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
    char which = s[8];
    s.erase(8,9);
    
    if(which == 'A') 
    {
        if(s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        } 
        return s;
    }
    
    if(s[0] =='1' && s[1] == '2')
        return s;
    string hour = s.substr(0, 2);
    
    int time = stoi(hour);
    
    time+=12;
    
    hour = to_string(time);
    
    s[0] = hour[0];
    s[1] = hour[1];
    
    return s;
    
}

int main()
{
    
    string k;
    cin>> k;
    cout << timeConversion(k);

    return 0;
}
