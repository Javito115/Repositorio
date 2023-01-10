from funciones import generarMatriz, burbuja, burbujaCorto
import time

m1 = generarMatriz()
m2 = list(m1)

print("La lista inicial es: ", m1)
print()
start = time.process_time()
burbuja(m1)
end = time.process_time()

print("El resultado por ordenación por burbuja es :",m1)
print ("La ordenación por burbuja simple ha tardado", (end - start))


start = time.process_time()
burbujaCorto(m2)
end = time.process_time()
print()
print("El resultado por ordenación por burbuja corta es :", m2)
print ("La ordenación por burbuja simple ha tardado", (end - start))

