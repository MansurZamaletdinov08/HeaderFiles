#include <iostream>
#include "ReacTrain.h"


bool Rectangular_Traingle::check() {
	if (F == 3 || (a + b + c) == 180) {
		return true;
	}
	else {
		return false;
	}
}

void Rectangular_Traingle::print_info() {
	std::cout << "Прямоугольный Треугольник:" << std::endl;
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