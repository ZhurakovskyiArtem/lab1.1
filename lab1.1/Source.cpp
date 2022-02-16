#include <iostream>
#include "Money.h"
using namespace std;
Money makeMoney(int x, int y)
{
	Money nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}
int main()
{
	Money n;
	n.Init(10, 2);
	n.Display();
	n.summa();
	Money k;
	k.Read();
	k.Display();
	k.summa();
	Money i;
	int a, b;
	cout << "first = ? ";
	cin >> a;
	cout << "second = ?";
	cin >> b;
	i = makeMoney(a, b);
	i.summa();
	return 0;
}