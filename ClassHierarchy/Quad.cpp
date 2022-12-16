#include <iostream>
#include "Quad.h"

bool Quadrilateral::check() {
	if (F == 4 && (A + B + C + D) == 360) {
		return true;
	}
	else {
		return false;
	}
}

void Quadrilateral::print_info() {
	std::cout << "Четырёхугольник:" << std::endl;
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