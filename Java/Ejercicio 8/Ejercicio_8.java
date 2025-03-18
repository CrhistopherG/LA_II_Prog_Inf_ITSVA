// 8. Implementa un algoritmo de ordenamiento (por ejemplo, burbuja, selección o 
// inserción) para ordenar una lista de números. 

import java.util.Scanner;

public class Ejercicio_8{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Ingrese la cantidad de numeros a generar:");
        int numeros = sc.nextInt();
        int[] array = new int[numeros];
        for(int i=0; i < array.length; i++){
            array[i] = (int)(Math.random() * 100 + 1);
        }
        System.out.println("Arreglo desordenado de "+array.length+" numeros: ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+ " ");
        }
        System.out.println();

        int aux = 0;
        for (int i = 0; i < array.length; i++) {
            for (int j = 1; j < array.length; j++) {
                if(array[j-1]>array[j]){
                    aux = array[j-1];
                    array[j-1] = array[j]; 
                    array[j] = aux;
                }
            }
        }
        System.out.println("Arreglo ordenado de "+array.length+" numeros:");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+ " ");
        }
        sc.close();
    }
}