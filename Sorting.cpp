#include "Sorting.h"
void Sorting::insertionSort() {
    int temp;
    int j;
    for (int i =prim+1;i<ult;i++){
        temp = mainContainer[i];
        j = i-1;
        while (j>=prim && temp < mainContainer[j]) {
            mainContainer[j + 1] = mainContainer[j];
            j-=1;
        }
        mainContainer[j + 1] = temp;
    }
}
void Sorting::selectionSort() {
    for (int i=prim; i<ult-1;i++){
        swap(mainContainer, i, posMinimo(mainContainer, i, ult));
    }
}

void Sorting::bubbleSort() {
    for (int i=prim; i<ult-1;i++){
        for (int j= ult-1;j>=i+1;j--){
            if (mainContainer[j - 1] > mainContainer[j]){
                int a = j-1;
                swap(mainContainer, a, j);
            }
        }
    }
}

void Sorting::mergeSort(const int &first, const int &last) {
    if (first<last){
        int mitad = first+(last-first)/2;
        mergeSort(first,mitad);
        mergeSort(mitad+1,last);
        merge(mainContainer,first, mitad, last);
    }
}

void Sorting::heapSort(const int &first, const int &last) {
    doHeap(first,last);
    for (int i=last-1;i>first+1;i--){
        swap(mainContainer,first,i);
        push(first,i-1,first);
    }
}

void Sorting::quickSort(const int &first, const int &last) {
    if (first<last){
        int l = pivote(first,last);
        quickSort(first,l-1);
        quickSort(l+1,last);
    }
}


void Sorting::merge(std::vector<int> &cont, const int &first, int &mit, const int &last) {
    std::vector<int> cont2; std::vector<int> cont3;
    int n1 = mit - first + 1;
    int n2 =  last - mit;
    for (int i=0; i<n1;i++)
        cont2.push_back(mainContainer[first+i]);
    for (int j=0; j<n2;j++)
        cont3.push_back(mainContainer[mit+1+j]);
    int i =0; int j=0;int k= first;
    while (i<n1 && j<n2) {
        if (cont2[i] <= cont3[j]) {
            cont[k] = cont2[i];
            i++;
        } else {
            cont[k] = cont3[j];
            j++;
        }
        k++;
    }
        while (i < n1)
        {
            mainContainer[k] = cont2[i];
            i++;
            k++;
        }
        while (j < n2) {
            mainContainer[k] = cont3[j];
            j++;
            k++;
        }
}

void Sorting::doHeap(const int &first, const int &last) {
    for (int i= (last-first+1)/2 ;i>1;i--)
        push(first,last,first+i-1);
}

int Sorting::posMinimo(std::vector<int> &cont, int &first, int &last) {
    int min = first;
    for (auto j=first+1; j <last;j++){
        if (cont[j]<cont[min])
            min= j;
    }
    return min;
}

void Sorting::swap(std::vector<int> &cont, const int &first, const int &last) {
    int temp;
    temp =cont[first] ;
    cont[first] = cont[last];
    cont[last] = temp;
}

void Sorting::push(const int &first, const int &last, const int &i) {
    int k = i-first+1;
    int j=k;
    if (2*j<=(last-first+1) && mainContainer[2*j+first-1]> mainContainer[k+first-1])
        k= 2*j;
    if (2*j<(last-first+1) && mainContainer[2*j+first]> mainContainer[k+first-1])
        k = 2*j+1;
    if (k!=j)
        swap(mainContainer,j+first-1,k+first-1);
}

int Sorting::pivote(const int &first, const int &last) {
    int p = mainContainer[last];
    int i = first - 1;
    for (int j = first; j <= last - 1; j++){
        if (mainContainer[j] < p){
            i++;
            swap(mainContainer, i, j);
        }
    }
    swap(mainContainer, i + 1, last);
    return i + 1;
}
