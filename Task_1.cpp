//Циклы задание №1

#include <iostream>

int get_n()
{
    int n = 0;
    std::cout << "enter N:";
    std::cin >> n;
    system("cls");
    return n;
}

void n_out(int n)
{
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < counter; j++)
        {
            std::cout << "0";
        }
        counter++;
        std::cout << "\n";
    }
}

int main()
{
    int n = get_n();
    n_out(n);
}
