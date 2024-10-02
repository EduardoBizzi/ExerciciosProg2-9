#include <iostream>
using namespace std;

int main(){
    int *p, *q, x, y;

    cin >> x >> y;
    p = &x;
    q = &y;
    cout << *p << "  " << *q << endl;
    cout << p << "  " << q << endl;
    cout << &p << "  " << &q << endl;
}