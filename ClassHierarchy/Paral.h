#include <iostream>
#include "Quad.h"
#pragma once

class Parallelogramm : public Quadrilateral {
protected:
	int a = 20, b = 30, c = 20, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	bool check() override;
	void print_info() override;
};