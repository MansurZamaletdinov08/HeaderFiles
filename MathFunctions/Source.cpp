#include <iostream>
#include "MathFunction.h"

int main() {
    setlocale(LC_ALL, "Ru");
    int x, y;
    int a;

    std::cout << "Введите первое число: ";
    std::cin >> x;

    std::cout << "Введите второе число: ";
    std::cin >> y;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> a;

    switch (a) {
    case 1:
        std::cout << Add(x, y);
        break;
    case 2:
        std::cout << Sub(x, y);
        break;
    case 3:
        std::cout << Mult(x, y);
        break;
    case 4:
        std::cout << Div(x, y);
        break;
    case 5:
        std::cout << Deg(x, y);
        break;
    }
}