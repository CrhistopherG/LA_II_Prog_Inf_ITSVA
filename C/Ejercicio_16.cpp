// 16. Escribe un programa que convierta un número binario a decimal. 

#include <iostream>
#include <cmath>
using namespace std;

int binarioADecimal(string binario) {
    int decimal = 0;
    int longitud = binario.length();

    for (int i = 0; i < longitud; i++) {
        if (binario[i] == '1') {
            decimal += pow(2, longitud - i - 1);
        }
    }

    return decimal;
}

int main() {
    string binario;
    cout << "Ingresa un numero binario: ";
    cin >> binario;

    int decimal = binarioADecimal(binario);

    cout << "El numero decimal es: " << decimal << endl;

    return 0;
}




/* 

Comando para ejecutarlo
cd "C:\Users\Juan Pablo Pérez\Documents\GitHub\LA_II_Prog_Inf_ITSVA\C"
g++ -o Ejercicio_16.exe Ejercicio_16.cpp
./Ejercicio_16.exe

*/