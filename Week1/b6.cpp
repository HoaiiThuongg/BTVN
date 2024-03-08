#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    double size = arr.size();
    double cnt0=0, cntd = 0,cnta = 0;
    for(int i = 0;i<size;i++)
    {
        if(arr[i] == 0) cnt0++;
        else if(arr[i]>0) cntd++;
        else cnta++;
    }
    
    std::cout << cntd/size << std::endl
                 <<cnta/size << std::endl
                 <<cnt0/size << std::endl;
                 
}
