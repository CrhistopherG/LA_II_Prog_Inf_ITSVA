
# 2. Genera los primeros n términos de la serie de Fibonacci. 

digitos = []

def fib(num):
    if(num<=1):
        return num
    resultado = fib(num-1) + fib(num-2)
    digitos.append(resultado)
    return resultado

n = input("Ingrese la cantidad de digitos de fibonnacci a generar: ")

# Comando para compilar
# python -m compileall Ejercicio_2.py

# Comando para generar el codigo intermedio
# python -m dis Ejercicio_2.py