#include <iostream>
#include "Traingle.h"
#pragma once


class Rectangular_Traingle2 : public Traingle {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 40, C = 90;
	int F = 3;
public:
	bool check() override;
	void print_info() override;
};