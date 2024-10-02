#include <iostream>
#include "ex7a.cpp"
using namespace std;

extern int global;

int main(){
    int n;
    cin >> n;
    global += n;
    cout << global << endl;
}