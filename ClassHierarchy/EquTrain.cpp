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