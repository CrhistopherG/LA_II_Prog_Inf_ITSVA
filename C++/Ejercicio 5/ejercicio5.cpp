#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));                 // Inicializar la semilla para números aleatorios
    int numAleatorio = rand() % 11; // Número aleatorio entre 0 y 10
    int num;

    cout << "Adivina el numero" << endl;

    while (true)
    {
        cout << "El numero esta entre 0 y 10" << endl;
        cout << "Introduce el numero: ";
        cin >> num;

        if (num == numAleatorio)
        {
            cout << "¡Acertaste! El numero era: " << numAleatorio << endl;
            break;
        }
        else
        {
            cout << "Intentalo de nuevo" << endl;
        }
    }

    return 0;
}
