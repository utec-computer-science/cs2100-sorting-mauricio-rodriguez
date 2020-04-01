#ifndef CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H
#define CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H

#include <vector>
#include <iostream>
class Sorting {
private:
    std::vector<int> &mainContainer;
    int prim;
    int ult;
    void swap(std::vector<int> &cont,const int &first, const int &last);
    int posMinimo(std::vector<int> &cont, int &first, int &last);
    int pivote(const int &first, const int &last);
    void heapify(const int &last,const int &i);
    void merge(std::vector<int> &cont,
               const int &first, int &mit, const int &last);
public:
    Sorting(std::vector<int> &container, const int &prim,const int &ult) : mainContainer(container),
    prim(prim), ult(ult){heapSort(ult);};

    void insertionSort();
    void selectionSort();
    void bubbleSort();
    void mergeSort(const int &first,const int &last );
    void heapSort(const int &last );
    void quickSort(const int &first,const int &last );
};


#endif