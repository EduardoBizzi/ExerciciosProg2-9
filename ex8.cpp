#include <iostream>
using namespace std;

void funcao (){
    register int y;
    cin >> y;
    cout << y << endl;
    y++;
    cout << y << endl;
}

int main(){
    funcao();
    funcao();
    funcao();
    funcao();
    funcao();
}