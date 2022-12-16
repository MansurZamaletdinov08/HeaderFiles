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
	std::cout << "��������������:" << std::endl;
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}
	std::cout << "���������� ������: " << F << std::endl;
	std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
}