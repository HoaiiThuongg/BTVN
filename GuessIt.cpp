#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int soNgauNhien()
{
	srand(time(0));
	int random = rand() % 100 + 1;

	return random;
}

void doanSo(int&n)
{
	cout << "Ban doan la so may? ";
	cin >> n;
}

bool choiLai()
{
	while(true)
	{
		cout <<"Ban co muon choi la khong: (Y neu co, N neu khong muon) " ;
		char c;
		cin >> c;
		
		if(c == 'Y' || c == 'y') return true;
		else if(c == 'N' || c == 'n') return false;
		else 
		{
			cout <<"Ki tu khong hop le"<< endl;
		}
	}	
}

bool ketQua(int n,int randNum,string& s)
{
	if (n > randNum) { s = "Nho hon di ban oi"; return false; }
	if (n < randNum) { s = "Lon hon di ban oi"; return false; }
	if (n == randNum) { s = "Dung roi ban oi! Chuc mung nhe!"; return true;}
}

int main()
{
	int n;string s;
	bool isRunning = true;
	int randNum = soNgauNhien();

	while (isRunning)
	{
		doanSo(n);
		bool isWin = ketQua(n,randNum,s);
		cout << s<< endl<<endl;
		
		if(isWin)
		{
			if(!choiLai()) isRunning = false;
		}	
	}

	return 0;
}
