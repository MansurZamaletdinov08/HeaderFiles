#include <iostream>
#include "Figure.h"
#pragma once

class Quadrilateral : public Figure {
protected:
	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;
	int F = 4;

public:
	bool check() override;
	void print_info() override;
};