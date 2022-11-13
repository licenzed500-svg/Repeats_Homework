//Циклы задание 3(задача 2(К)) Вариант 6


#include <iostream>
#include <cmath>


struct func
{
    float y = 0;
    int step = 0;
    int diapason = 0;
};

void get_step_diapason(func* some_func)
{
    std::cout << "enter step:";
    std::cin >> some_func->step;
    std::cout << "\n";
    std::cout << "enter diapason:";
    std::cin >> some_func->diapason;
    system("cls");
}

void out_y(int i, float y)
{
    std::cout << "for x:" << i << "variable is:" << y << "\n";
}

void build_y(func some_func)
{
    for (int i = 0; i < some_func.diapason; i+=(some_func.step))
    {
        some_func.y = sqrt(5+i) + 13 * i + cos(12*i + 91);
        out_y(i, some_func.y);
    }
}

int main()
{
    func some_y;
    get_step_diapason(&some_y);
    build_y(some_y);
}
