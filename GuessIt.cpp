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

int doanSo()
{
	int n;
	cout << "Ban doan la so may? ";
	cin >> n;
	return n;
}

string ketQua(int n,int randNum)
{
	if (n > randNum) { return "Nho hon di ban oi"; }
	if (n < randNum) { return "Lon hon di ban oi"; }
	if (n == randNum) { return "Dung roi be oi!"; }
}

int main()
{
	int n;
	bool isRunning = true;
	int randNum = soNgauNhien();

	while (isRunning)
	{
		n = doanSo();
		cout << ketQua(n, randNum) << endl;
		if (n == randNum) isRunning = false;
	}

	return 0;
}