#include <iostream>
#include "Rectangle.h"

bool Rectangle::check() {
	if ((a == c && b == d) && (A && B && C && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

void Rectangle::print_info() {
	std::cout << "Прямоугольник:" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}
	std::cout << "Количество сторон: " << F << std::endl;
	std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
}