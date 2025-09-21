#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void lereverificarm3 (string nomearquivo){
    ifstream entrada(nomearquivo);
    int numeros;

    ofstream saida("saida.txt");

    while (entrada>>numeros){
        if (numeros%3!=0){
            saida<<numeros<< " ";       
        }
    }
}



int main (){
    string nomearquivo;
    cin >> nomearquivo;

    lereverificarm3 (nomearquivo);
    return 0;
}