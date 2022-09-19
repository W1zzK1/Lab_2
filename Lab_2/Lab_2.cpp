#include <iostream>
#include <math.h>
using namespace std;
											//Дано трехзначное число. Найти сумму и произведение его цифр.
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, t1, t2, t3;
	cin >> a;
	t1 = a / 100;
	t2 = (a % 100) / 10;
	t3 = a % 10;
	cout << t1 + t2 + t3 << " " << "Сумма всех чисел" << endl;
	cout << t1 * t2 * t3 << " " << "Произведение всех чисел";
	return 0;
}