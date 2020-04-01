

#include <iostream>
#include "Sorting.h"
using namespace std;

int main(int, char*[]){
    vector<int> vec{1,8,6,9,0,1,5,7,4,0,4,21,4,76,12,9};
   //for merge sort and quickSort Sorting sort(vec,0,vec.size()-1);
    Sorting sort(vec,0,vec.size());
    for (int &i:vec)
        cout<<i<<" ";
    return 0;
}