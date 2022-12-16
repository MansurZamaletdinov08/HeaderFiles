#include <iostream>
#include "EquTrain.h"

bool Equilateral_Traingle::check() {
	if ((a == b && c) && (A && B && C == 60)) {
		return true;
	}
	else {
		return false;
	}
}

void Equilateral_Traingle::print_info() {
	std::cout << "Равносторонний треугольник:" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}
	std::cout << "Количество сторон: " << F << std::endl;
	std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
}