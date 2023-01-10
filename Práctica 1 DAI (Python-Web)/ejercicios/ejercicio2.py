limite = int(input("Introduce límite para calcular números primos menores a este límite: "))

numeros = list(range(limite))
primos = [ ]

for i in range(2, limite):
	if numeros[i] != -1:
		primos.append(numeros[i])  
	for j in range(i, limite, i):
		numeros[j] = -1

print("Los números primos hasta el ", limite, "son los siguientes: ")
print (primos)

