// Determina si una cadena de texto es un palíndromo (se lee igual al derecho y al revés. 

#include <iostream> // Para std::cout, std::cin, std::endl
#include <string>    // Para std::string
#include <algorithm>  // Para std::reverse
#include <cctype>     // Para std::tolower y std::isalnum

using namespace std; 

// Función que determina si una cadena es palíndromo.
bool esPalindromo(const string &cadena) { 
    string normalizada; // Cadena normalizada.
    
    // Se recorre la cadena y se agregan solo los caracteres alfanuméricos en minúsculas.
    for (char c : cadena) { // Se recorre la cadena.
        if (isalnum(c)) { // Si es alfanumérico.
            normalizada.push_back(tolower(c)); // Se convierte a minúsculas.
        }
    }
    
    // Se crea una copia de la cadena normalizada y se invierte.
    string reversa = normalizada; 
    reverse(reversa.begin(), reversa.end()); // Se invierte la cadena.LS

    
    // Si la cadena normalizada es igual a su reversa, es un palíndromo.
    return normalizada == reversa; 
}

int main() { 
    string texto; 
    
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);  // Se lee la línea completa, permitiendo espacios.
    
    if (esPalindromo(texto)) // Se verifica si es palíndromo.
        cout << "La cadena es un palindromo." << endl; 
    else 
        cout << "La cadena no es un palindromo." << endl; 
    
    return 0; 
}

// clang++ -S -emit-llvm Palindromo.cpp -o Palindromo.ll

// clang++ -S -emit-llvm Palindromo.cpp -o Palindromo.ll -I""C:\msys64\mingw64\include"" -L""C:\msys64\mingw64\lib"" -v

//
