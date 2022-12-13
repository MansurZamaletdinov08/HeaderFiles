#include <iostream>
#include <string>
#include "Class.h"
#pragma once

class Counter {
private:
    int y;
public:
    Counter(int value) {
        y = value;
    }

    Counter() {
        y = 1;
    }

    void incr() {
        y++;
    }

    void decr() {
        y--;
    }

    int rev() {
        return this->y;
    }
};