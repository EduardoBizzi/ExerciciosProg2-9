#include <iostream>
#define T 10
using namespace std;

int main(){
    int *p, v[T];
    for(p = &v[0]; p != &v[T];p++){
        cin >> *p;
    }
    for(p = &v[0]; p != &v[T];p++){
        cout << *p << endl;
    }
}