#include "Sorting.h"
void Sorting::selectionSort() {
    int temp; int j;
    for (int i=prim; i<ult-1;i++){
        swap(container,i,posMinimo(container,i,ult));
    }
}

int Sorting::posMinimo(std::vector<int> &cont, int &first, int &last) {
    int min = first;
    for (auto j=first+1; j <last;j++){
        if (cont[j]<cont[min])
            min= j;
    }
    return min;
}

void Sorting::swap(std::vector<int> &cont, int &first, const int &last) {
    int temp;
    temp =cont[first] ;
    cont[first] = cont[last];
    cont[last] = temp;
}