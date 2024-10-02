#include <iostream>
using namespace std;

void incrementar (int x){
    x++;
    cout << x << endl;
}

int main(){
    static int x;
    cin >> x;
    incrementar(x);
    incrementar(x);
    incrementar(x);
    incrementar(x);
    incrementar(x);
    incrementar(x);
    incrementar(x);
}