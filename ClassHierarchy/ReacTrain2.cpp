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
	std::cout << "�����������:" << std::endl;
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