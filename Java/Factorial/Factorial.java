// Escribe un programa que calcule el factorial de un número dado.

package Java;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner f = new Scanner(System.in); 
        System.out.print("Ingrese cualquier numero: "); // Solicita un numero
        int numero = f.nextInt(); // Lee el numero

        long factorial = 1; // Inicializa la variable factorial en 1
        for (int i = 1; i <= numero; i++) { // Ciclo for para calcular el factorial 
            factorial *= i; // Multiplica el factorial por el numero actual
        }

        System.out.println("El factorial de " + numero + " es " + factorial); 
        f.close(); 
    }
}

// javap -c Factorial