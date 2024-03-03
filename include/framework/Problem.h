#pragma once

#include <iostream>

class Problem {
protected:
    int _size;

public:
    Problem (int size);
    int size () const;

    virtual Problem* subproblem (int from, int to) const = 0;
    virtual void write (std::ostream& os) const = 0;
};
