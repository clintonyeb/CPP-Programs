#include <iostream>
#include <assert.h>

template <typename T>

T minimum(const T l, const T r){
    return l < r ? l : r;
}

int main(){
    int a = minimum<int>(4.0, 10.0);
    assert(a == 4);
    return 0;
}
