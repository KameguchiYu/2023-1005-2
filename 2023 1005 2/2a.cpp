#include <iostream>
#include "2b.h"
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << "1つ目の数字を入力してください" << endl;
	cin >> a;
	cout << "2つ目の数字を入力してください" << endl;
	cin >> b;

	cout << "足した答えは" << sum(a, b) << "です" << endl;
}