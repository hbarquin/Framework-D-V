#include "VectorialSolution.h"

VectorialSolution::VectorialSolution (const std::vector<int>& v) {
    _v = v;
}

std::vector<int> VectorialSolution::get () const {
    return _v;
}

void VectorialSolution::write (std::ostream& os) const {
    for (int i = 0; i < _v.size(); i++) {
        os << _v[i] << " ";
    }
}
