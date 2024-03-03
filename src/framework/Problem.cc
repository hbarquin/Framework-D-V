#include "framework/Problem.h"

Problem::Problem (int size) {
    _size = size;
}

int Problem::size () const {
    return _size;
}
