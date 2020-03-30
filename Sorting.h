
#ifndef CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H
#define CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H

#include <iostream>
#include <vector>
class Sorting {
private:
    std::vector<int> &container;
    int prim;
    int ult;
    void swap(std::vector<int> &container,int &first, const int &last);
public:
    explicit Sorting(std::vector<int> &container,const int &prim,const int &ult) : container(container),
    prim(prim),ult(ult){bubbleSort();}

    void bubbleSort();
};

#endif