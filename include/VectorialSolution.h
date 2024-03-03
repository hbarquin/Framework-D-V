#pragma once

#include "framework/Solution.h"
#include <vector>
#include <iostream>

class VectorialSolution : public Solution {
protected:
    std::vector<int> _v;

public:
    VectorialSolution (const std::vector<int>& v);

    virtual std::vector<int> get () const;
    virtual void write (std::ostream& os) const;
};
