import sys
from funciones import palabraYMayuscula, email, tarjetaCredito

while True:
	print ("Introduce una cadena para ver si es primer apellido, email o tarjeta de credito:")
	cadena = sys.stdin.readline()  

	if palabraYMayuscula(cadena):
		print ("Es primer apellido")

	elif email(cadena):
		print ("Es un email")

	elif tarjetaCredito(cadena):
		print ("Es un nº de tarjeta de crédito")

	else:
		print ("No es ni primer apellido, ni email ni un nº de tarjeta de crédito\n")
