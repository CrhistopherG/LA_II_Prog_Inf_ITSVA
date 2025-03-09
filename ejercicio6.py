import math

def area_circulo(radio):
    return math.pi * radio ** 2
def area_triangulo(base, altura):
    return (base * altura) / 2
def area_rectangulo(base, altura):
    return base * altura


def main():
    op = 0
    while True:
        print("Bienvenido a la calculadora de areas")
        print("1. Circulo")
        print("2. Triangulo")
        print("3. Rectangulo")
        print("4. Salir")
        
        op = int(input("Introduce la opcion: "))
        if op == 1:
            radio = int(input("Introduce el radio: "))
            print("El area del circulo es: ", area_circulo(radio))
        elif op == 2:
            base = int(input("Introduce la base: "))
            altura = int(input("Introduce la altura: "))
            print("El area del triangulo es: ", area_triangulo(base, altura))
        elif op == 3:
            base = int(input("Introduce la base: "))
            altura = int(input("Introduce la altura: "))
            print("El area del rectangulo es: ", area_rectangulo(base, altura))
        elif op == 4:
            print("Saliendo...")
            break
        else:
            print("Opcion no valida")
        
    

if __name__ == "__main__":
    main()
   
    
