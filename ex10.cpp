#include <iostream>
using namespace std;

int main(){
    int *p, *q, x, y;
    p = &x;
    q = &y;
    if(p > q){
        cout << p << endl;
    }
    else{
        cout << q << endl;
    }
}