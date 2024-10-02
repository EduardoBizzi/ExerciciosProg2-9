#include <iostream>
#define k 10
using namespace std;

int main(){
    int *p, x;

    cin >> x;
    p = &x;
    cout << *p << endl;
    *p -= k;
    cout << *p << endl;
}