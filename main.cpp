

#include <iostream>
#include "Sorting.h"
using namespace std;

int main(int, char*[]){
    vector<int> vec{1,8,6,9,0,1,5};
   //fr merge sort Sorting sort(vec,0,vec.size()-1);
    for (int &i:vec)
        cout<<i<<endl;
    return 0;
}