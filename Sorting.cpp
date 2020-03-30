#include "Sorting.h"
void Sorting::insertionSort() {
    int temp;
    int j;
    for (int i =prim+1;i<ult;i++){
        temp = container[i];
        j = i-1;
        while (j>=prim && temp<container[j]) {
            container[j + 1] = container[j];
            j-=1;
        }
        container[j+1] = temp;
    }
}