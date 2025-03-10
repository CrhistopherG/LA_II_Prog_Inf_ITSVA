import java.util.Scanner;

public class ejercicio4 {

    public static void main(String[] args) {
        int r = 0;

        do {
            System.out.println("Suma de los digitos de un numero");
            System.out.println("Ingrese un numero: ");
            Scanner scanner = new Scanner(System.in);
            int num = scanner.nextInt();

            System.out.println("La suma de los digitos de " + num + " es: " + sumardigitos(num));
            System.out.println("Desea ingresar otro numero? 1=si 2=no");
            Scanner scanner2 = new Scanner(System.in);
            r = scanner2.nextInt();

        } while (r == 1);
    }

    public static int sumardigitos(int num) {
        int suma = 0;
        while (num != 0) {
            suma += num % 10;
            num /= 10;
        }
        return suma;

    }

}