#include <iostream>
#include "Traingle.h"
#pragma once

class Equilateral_Traingle : public Traingle {
protected:
	int a = 30, b = 30, c = 30;
	int A = 60, B = 60, C = 60;
	int F = 3;

public:
	bool check() override;
	void print_info() override;
};