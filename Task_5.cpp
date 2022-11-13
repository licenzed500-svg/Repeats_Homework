//Циклы задание 5 (задача 10) Вариант 6

//Числа точно не больше 10

#include <iostream>
#include <time.h>

void random(short* x, short* y, short* z)
{
	int min = -10;
	int max = 10;
	*x = min + rand() % (max - min);
	*y = min + rand() % (max - min);
	*z = min + rand() % (max - min);
}

void algs()
{
	short x = 0;
	short y = 0;
	short z = 0;
	int result = 0;
	while (result != 270)
	{
		random(&x, &y, &z);
		result = 15 * x + 20 * y + 30 * z;
	}
	std::cout << x << "\n";
	std::cout << y << "\n";
	std::cout << z << "\n";
}

int main()
{
	srand(time(NULL));
	algs();
}
