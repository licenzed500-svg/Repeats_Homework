//Циклы задание 3(задача 2(К)) Вариант 6


#include <iostream>

struct progression
{
	int step;
	int start;
	int end;
};

void get_data(progression* some_prog)
{
	std::cout << "enter step:";
	std::cin >> some_prog->step;
	std::cout << "\n";
	std::cout << "enter start number:";
	std::cin >> some_prog->start;
	std::cout << "\n";
	std::cout << "enter end number:";
	std::cin >> some_prog->end;
	std::cout << "\n";
	system("cls");
}

void arithmetic_progression(progression* some_prog)
{
	for (some_prog->start; some_prog->start < some_prog->end; some_prog->start+=some_prog->step)
	{
		std::cout << some_prog->start << "\n";
	}
}

int main()
{
	progression prgs;
	get_data(&prgs);
	arithmetic_progression(&prgs);
}
