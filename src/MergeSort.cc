#include "MergeSort.h"

bool MergeSort::Small (Problem* p) const {
    // std::cout << "Small? size: " << p->size() << " // " << (p->size() == 1) << '\n';
    return p->size() <= 1;
}

Solution* MergeSort::SolveSmall (Problem* p) const {
    VectorialProblem* vp = reinterpret_cast<VectorialProblem*>(p);
    return new VectorialSolution(vp->get());
}

std::vector<Problem*> MergeSort::Divide (Problem* p, int size) const {
    assert(p->size() > 1);
    VectorialProblem* vp = reinterpret_cast<VectorialProblem*>(p);
    
    /* std::cout << "Primera mitad: ";
    vp->subproblem(0, size/2 - 1)->write(std::cout);
    std::cout << '\n';
    std::cout << "Segunda mitad: ";
    vp->subproblem(size/2, size - 1)->write(std::cout);
    std::cout << '\n';
    */

    return { vp->subproblem(0, size/2 - 1), vp->subproblem(size/2, size - 1) };
}

Solution* MergeSort::Combine (Solution* s1, Solution* s2) const {
    VectorialSolution* vs1 = reinterpret_cast<VectorialSolution*>(s1);
    VectorialSolution* vs2 = reinterpret_cast<VectorialSolution*>(s2);

    std::vector<int> result;
    int i = 0, j = 0;
    while (i < vs1->get().size() && j < vs2->get().size()) {
        if (vs1->get().at(i) <= vs2->get().at(j)) {
            result.push_back(vs1->get().at(i));
            i++;
        } else {
            result.push_back(vs2->get().at(j));
            j++;
        }
    }

    while (i < vs1->get().size()) {
        result.push_back(vs1->get().at(i));
        i++;
    }

    while (j < vs2->get().size()) {
        result.push_back(vs2->get().at(j));
        j++;
    }

    return new VectorialSolution(result);
}
