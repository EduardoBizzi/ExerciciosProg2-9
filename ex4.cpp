#include <iostream>
using namespace std;

int main(){
    int *p, x, *q, y;

    cin >> x >> y;
    p = &x;
    q = &y;
    cout << *p << endl;
    cout << *q << endl;
    *p - *q;
    cout << *p << endl;
    cout << *q << endl; 
}