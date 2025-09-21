#include <iostream>
#include <cmath>
using namespace std;

int combinacaosimples (int x, int y){
    double fatorialx=1, fatorialy=1, fatorialxmenosy=1;
    double contx=x, conty=y;
    double contxmenosy=x-y;

    while (contx>1){
        fatorialx=fatorialx*contx;
        contx--;
    }

    while (conty>1){
        fatorialy=fatorialy*conty;
        conty--;
    }

    while (contxmenosy>1){
        fatorialxmenosy=fatorialxmenosy*contxmenosy;
        contxmenosy--;
    }

    double resultadocombinacao;
    resultadocombinacao=fatorialx/(fatorialy*fatorialxmenosy);

return resultadocombinacao;
}


int main (){
    int x, y;
    cin >> x >> y;
    
    double resultadocombinacao=combinacaosimples(x, y);

    cout << resultadocombinacao << endl;

    return 0;
}