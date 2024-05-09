#include<iostream>
#include <string>

using namespace std;

void lietKe(string word)
{
	if(word.size() == 3)
	{
		cout << word << endl;
		return ;
	}
	
	lietKe(word + "a");
	lietKe(word + "b");
	lietKe(word + "c");
	lietKe(word + "d");
}

int main()
{
	string word = "";
	lietKe(word);
}