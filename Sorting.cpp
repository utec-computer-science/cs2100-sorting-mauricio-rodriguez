#include "Sorting.h"
void Sorting::bubbleSort() {
    for (int i=prim; i<ult-1;i++){
        for (int j= ult-1;j>=i+1;j--){
            if (container[j-1]>container[j]){
                int a = j-1;
                swap(container,a,j);
                }
        }
    }
}

void Sorting::swap(std::vector<int> &cont,int &first, const int &last) {
    int temp;
    temp =cont[first] ;
    cont[first] = cont[last];
    cont[last] = temp;
}