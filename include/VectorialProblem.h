#pragma once

#include <vector>
#include <iostream>

#include "framework/Problem.h"

class VectorialProblem : public Problem {
protected:
    std::vector<int> _v;

public:
    VectorialProblem (const std::vector<int>& v);

    std::vector<int> get () const;

    virtual Problem* subproblem (int from, int to) const;
    virtual void write (std::ostream& os) const;
};
