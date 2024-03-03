#include "framework/Algorithm.h"
#include <iostream>

Solution* Algorithm::Solve (Problem* p, int size) const {
    // std::cout << "Problema actual: ";
    // p->write(std::cout);
    // std::cout << "\n";
    if (Small(p)) {
        return SolveSmall(p);
    }

    std::vector<Problem*> m = Divide(p, size);
    // Solution* S1 = Solve(m[0], size/2);
    // Solution* S2 = Solve(m[1], size/2);
    // Solution* S = Combine(S1, S2);

    Solution* finalSolution = Solve(m[0], size/m.size());
    for (unsigned i = 1; i < m.size(); i++) {
        // std::cout << "subproblema: ";
        // m[i]->write(std::cout);
        // std::cout << '\n';
        Solution* s = Solve(m[i], size/m.size());
        finalSolution = Combine(finalSolution, s);
    }

    return finalSolution;
}
