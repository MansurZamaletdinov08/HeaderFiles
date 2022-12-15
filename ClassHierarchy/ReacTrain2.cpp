#include <iostream>
#include "ReacTrain2.h"


bool Rectangular_Traingle2::check() {
	if ((A + B) == 90) {
		return true;
	}
	else {
		return false;
	}
}

void Rectangular_Traingle2::print_info() {
	std::cout << "Треугольник:" << std::endl;
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