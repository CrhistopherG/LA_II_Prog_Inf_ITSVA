# Encuentra todos los números primos dentro de un rango dado.

def es_primo(n):

    if n < 2: # Si n es menor a 2, no es primo
        return False 
    # Solo necesitamos verificar divisores hasta la raíz cuadrada de n.
    for i in range(2, int(n**0.5) + 1): 
        if n % i == 0: # Si n es divisible por i, entonces no es
            return False 
    return True

def encontrar_primos(inicio, fin):
    # Función que recorre el rango [inicio, fin] y retorna una lista con todos los números primos.
    primos = []
    for num in range(inicio, fin + 1): # Recorremos el rango [inicio, fin]
        if es_primo(num): # Si el número es primo, lo agregamos a la lista
            primos.append(num) 
    return primos

if __name__ == "__main__": 
    inicio = int(input("Ingrese el número inicial del rango: "))
    fin = int(input("Ingrese el número final del rango: "))
    primos = encontrar_primos(inicio, fin) # Llamamos a la función encontrar_primos
    print("Los números primos en el rango son:", primos) # Imprimimos los números primos

#  python -m dis Rangoprimo.py