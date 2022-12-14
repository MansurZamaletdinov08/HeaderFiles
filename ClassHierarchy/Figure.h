#include <iostream>
#pragma once

class Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
	int F = 0;
public:
	virtual bool check();
	virtual void print_info();
};