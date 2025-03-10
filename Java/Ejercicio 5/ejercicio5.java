import java.util.Scanner;

public class ejercicio5 {
    public static void main(String[] args) {
        System.out.println("Adivina el numero");
        int numeroAleatorio = (int) (Math.random() * 10 + 1);
        int numero = 0;
        int intentos = 0;
        do {
            System.out.println("Ingrese un numero: ");
            Scanner scanner = new Scanner(System.in);
            numero = scanner.nextInt();
            intentos++;
            if (numero > numeroAleatorio) {
                System.out.println("El numero es menor");
            } else if (numero < numeroAleatorio) {
                System.out.println("El numero es mayor");
            }
        } while (numero != numeroAleatorio);
    }
}
