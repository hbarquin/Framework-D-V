#include <iostream>

#include "MergeSort.h"
#include "VectorialProblem.h"
#include "VectorialSolution.h"

int main () {
    MergeSort ms;
    Problem* problem = new VectorialProblem({ 3, 2, 5, 1 });
    std::cout << "Vector original: ";
    problem->write(std::cout);
    std::cout << '\n';

    Solution* vs = ms.Solve(problem, 4);

    std::cout << "Solucion final: ";
    vs->write(std::cout);
    std::cout << '\n';
}
