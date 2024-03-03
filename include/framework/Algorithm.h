#pragma once

#include <vector>

#include "Problem.h"
#include "Solution.h"

class Algorithm {
public:
    Solution* Solve (Problem* p, int size) const;

protected:
    virtual bool Small (Problem* p) const = 0;
    virtual Solution* SolveSmall (Problem* p) const = 0;

    virtual std::vector<Problem*> Divide (Problem* p, int size) const = 0;
    virtual Solution* Combine (Solution* s1, Solution* s2) const = 0;
};
