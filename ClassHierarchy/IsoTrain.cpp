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
	std::cout << "�������������� �����������:" << std::endl;
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}
	std::cout << "���������� ������: " << F << std::endl;
	std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
}
