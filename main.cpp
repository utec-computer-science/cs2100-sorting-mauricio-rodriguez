
#include <iostream>
using namespace std;

int main(int, char*[]){
    vector<int> vec{1,8,6,9,0,1,5};
    Sorting sort(vec,0,vec.size());
    for (int i =0;i<vec.size();i++)
        cout<<vec[i]<<endl;
        return 0;
}