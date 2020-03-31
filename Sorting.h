#ifndef CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H
#define CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H

#include <vector>
#include <iostream>
class Sorting {
private:
    std::vector<int> &container;
    int prim;
    int ult;
public:
    Sorting(std::vector<int> &container, const int &prim,const int &ult) : container(container),
    prim(prim),ult(ult){insertionSort();};
    void insertionSort();
};


#endif