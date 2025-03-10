// 15. Escribe un programa que convierta un número decimal a binario. 

#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    if (num == 0) {
        cout << "0";
        return;
    }
    
    int binary[32]; // Array para almacenar los bits (32 suficiente para enteros)
    int index = 0;
    
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }
    
    // Imprimir en orden inverso
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int num;
    cout << "Ingrese un numero decimal: ";
    cin >> num;
    cout << "El numero en binario es: ";
    decimalToBinary(num);
    cout << endl;
    return 0;
}


/* 

Comando para ejecutarlo
cd "C:\Users\Juan Pablo Pérez\Documents\GitHub\LA_II_Prog_Inf_ITSVA\C"
g++ -o Ejercicio_15.exe Ejercicio_15.cpp
./Ejercicio_15.exe


Comando para sacar el IR

clang++ -S -emit-llvm Ejercicio_15.cpp -o Ejercicio_15.ll --target=x86_64-w64-mingw32 -stdlib=libstdc++ -I/mingw64/include/c++/13.2.0/

*/