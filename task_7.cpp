//Циклы задание 7 ( задача 3(j) ) Вариант 6



#include <iostream>
#include <cmath>


void get_ch_x(int* ch, int* x)
{
	std::cout << "enter ch:";
	std::cin >> *ch;
	std::cout << "\n";
	std::cout << "enter x:";
	std::cin >> *x;
	std::cout << "\n";
	system("cls");
}

void alghoritm(int* ch, int* x)
{
	bool __static = false;
	int res = 0;
	for (int i = 2; i < *ch; i++)
	{
		res += pow(*x, i) / i + 1;
	}
	x += res;
	std::cout << res;
}

int main()
{
	int ch = 0;
	int x = 0;
	get_ch_x(&ch, &x);
	alghoritm(&ch, &x);
}
