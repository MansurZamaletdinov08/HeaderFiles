#include <iostream>
#pragma once


class Counter {
public:
	int y = 1;
public:
	Counter(int value);
	Counter();

	void incr();
	void decr();
	int rev();

};