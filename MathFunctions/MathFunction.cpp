#include <iostream>
#include "MathFunction.h"

int Add(int x, int y) {
	return x + y;
}

int Sub(int x, int y) {
	return x - y;
}

int Mult(int x, int y) {
	return x * y;
}

int Div(int x, int y) {
	return x / y;
}

int Deg(int x, int y) {
	int res = 1;
	for (int i = 0; i < y; i++) {
		res = res * x;
	}
	return res;
}