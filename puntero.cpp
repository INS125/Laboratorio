#include <iostream>
#include <cstdlib>
using namespace std;

void acumular(int *a){
    int total = *a;
    for(int i = 0; i < 100; i++){
        total += i;
    }
    *a = total;
}

int main(){
    int num = 0;
    acumular(&num);
    cout << num << endl;
    
    int *a, b, **c;
    b = 112358;
    a = &b;
    c = &a;
    cout << a << " " << &b << " " << *c << endl;
    cout << *a << " " << b << " " << **c << endl;
}