
#include <iostream>
using namespace std;

int main(int, char*[]){
    vector<int> vec{1,6,3,7,9,1,0};

    Sorting sort(vec,0,vec.size());
    for (auto i = vec.begin(); i <vec.end();i++){
      cout<<*i<<endl;
    }
    return 0;
}