#pragma once

#include "framework/Algorithm.h"
#include "VectorialProblem.h"
#include "VectorialSolution.h"

class MergeSort : public Algorithm {
protected:
    virtual bool Small (Problem* p) const;
    virtual Solution* SolveSmall (Problem* p) const;

    virtual std::vector<Problem*> Divide (Problem* p, int size) const;
    virtual Solution* Combine (Solution* s1, Solution* s2) const;
};
