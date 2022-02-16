#include "Money.h"
#include <iostream>
using namespace std;
void Money::SetFirst(int value)
{
	first = value;
}
void Money::SetSecond(int value)
{
	second = value;
}
bool Money::Init(int x, int y)
{
	first = x;
	if (y >= 0)
	{
		second = y;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}
void Money::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Money::Read()
{
	int x, y;
	cout << "first = ? ";
	cin >> x;
	do {
		cout << "second = ?";
		cin >> y;
	} while (!Init(x, y));
}
void Money::summa()
{
	int sum = first *= second;
	cout << "summa = " << sum << endl;
}