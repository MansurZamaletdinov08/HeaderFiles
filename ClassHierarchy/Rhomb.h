#include <iostream>
#include "Quad.h"
#pragma once

class Rhomb : public Quadrilateral {
protected:
	int a = 30, b = 30, c = 30, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	bool check() override;
	void print_info() override;
};