from funciones import crearCadenaParentesis

num = int(input("Introduce numero de caracteres para la cadena: "))
cadena = crearCadenaParentesis(num)
print("La cadena generada es: ", cadena)
total=0

for i in range(len(cadena)):
	# Cuando sean de apertura sumar, si no restar, si la cuenta negativa, mal formato
	if (cadena[i] == "["):
		total += 1
	else:
		total -= 1
	if (total < 0):
		print ("Corchete mal puesto en posición ",i) 
		exit()

if (total > 0):
	print ("Cadena no balanceada")
else:
	print ("CADENA BALANCEADA")
