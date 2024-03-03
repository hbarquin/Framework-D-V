#include "VectorialProblem.h"

VectorialProblem::VectorialProblem (const std::vector<int>& v)
: Problem(v.size())
{
    _v = v;
}

std::vector<int> VectorialProblem::get () const {
    return _v;
}

Problem* VectorialProblem::subproblem (int from, int to) const {
    // std::cout << "_size: " << _size << '\n';
    // std::cout << "from: " << from << ", to: " << to << '\n';
    assert(from >= 0 && to < _size);

    std::vector<int> result(to - from + 1);
    for (int i = from; i <= to; i++) {
        result[i - from] = _v[i];
    }

    return new VectorialProblem(result);
}

void VectorialProblem::write (std::ostream& os) const {
    for (int i = 0; i < _v.size(); i++) {
        os << _v[i] << " ";
    }
}
