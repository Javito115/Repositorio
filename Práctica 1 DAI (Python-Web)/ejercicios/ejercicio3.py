n = int(input("Introduce un numero para encontrar el n-esimo de la sucesión de fibonacci: "))
a, b = 0, 1

while a < n:
	a, b = b, a+b


   
print ("El numero",n,"-esimo de la sucesión de Fibonacci es ",a)
