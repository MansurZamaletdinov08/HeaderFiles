#include <iostream>
#include "IsoTrain.h"

bool Isosceles_Traingle::check() {
	if ((a == c) && (A == C) && (A + B + C == 180)) {
		return true;
	}
	else {
		return false;
	}
}

void Isosceles_Traingle::print_info() {
	std::cout << "Равнобедренный треугольник:" << std::endl;
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
