#include <iostream>
#include "Square.h"

bool Square::check() {
	if ((a && b == c && d) && (A && B && C && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

void Square::print_info() {
	std::cout << "Квадрат:" << std::endl;
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