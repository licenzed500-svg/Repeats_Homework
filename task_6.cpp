//Циклы задание 6 ( задача 3(F) ) Вариант 6



#include <iostream>

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
		if (__static == false)
		{
			res -= i * (*x);
			__static = true;
		}
		else if (__static == true)
		{
			res += i * (*x);
			__static = false;
		}
	}
	x -= res;
	std::cout << res;
}

int main()
{
	int ch = 0;
	int x = 0;
	get_ch_x(&ch, &x);
	alghoritm(&ch, &x);
}
