
# 2. Genera los primeros n términos de la serie de Fibonacci. 

digitos = []

def fib(num):
    if(num<=1):
        return num
    resultado = fib(num-1) + fib(num-2)
    digitos.append(resultado)
    return resultado

n = input("Ingrese la cantidad de digitos de fibonnacci a generar: ")