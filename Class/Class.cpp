#include <iostream>
#include <string>
#include "Class.h"


Counter::Counter(int value) {
	y = value;
}

Counter::Counter() {

}

void Counter::incr() {
	y++;
};
void Counter::decr() {
	y--;
};

int Counter::rev() {
	return this->y;
}

