#include <iostream>
#include "2b.h"
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << "1�ڂ̐�������͂��Ă�������" << endl;
	cin >> a;
	cout << "2�ڂ̐�������͂��Ă�������" << endl;
	cin >> b;

	cout << "������������" << sum(a, b) << "�ł�" << endl;
}