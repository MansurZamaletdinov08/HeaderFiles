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
	std::cout << "???????:" << std::endl;
	if (check() == true) {
		std::cout << "??????????" << std::endl;
	}
	else {
		std::cout << "????????????" << std::endl;
	}
	std::cout << "?????????? ??????: " << F << std::endl;
	std::cout << "???????: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "????: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" << std::endl;
}