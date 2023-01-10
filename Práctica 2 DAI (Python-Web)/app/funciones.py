import random
import re

def generarMatriz():
	tamanoMatriz = 10;
	matriz = []
	for i in range(tamanoMatriz):
		matriz.append(random.randint(0, 100)); 
	return matriz


def burbuja(m):
	for i in range(len(m)-1,0,-1):
		for j in range(i):
			if (m[j] > m[j+1]):
				tmp = m[j]
				m[j] = m[j + 1]
				m[j + 1] = tmp

def burbujaCorto(m):
	intercambio = True
	i = len(m)-1
	while i > 0 and intercambio:
		intercambio = False
		for j in range(i):
           		if m[j]>m[j+1]:
               			intercambio = True
               			tmp = m[j]
               			m[j] = m[j+1]
               			m[j+1] = tmp
		i = i-1

def crearCadenaParentesis(tam):
	cadena=""
	print(tam) 
	for i in range(tam):
		if (random.random() > 0.5) :
			cadena += "["
		else:
			cadena += "]"
	return cadena

def palabraYMayuscula(string):
	a = re.compile(r'([A-Za-z]+) ([A-Z])')
	return a.match(string)

def email(string):
	a = re.compile(r'\b[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}\b')
	return a.match(string)

def tarjetaCredito(string):
	a = re.compile(r'([0-9]{4}) ([0-9]{4}) ([0-9]{4}) ([0-9]{4})|([0-9]{4})-([0-9]{4})-([0-9]{4})-([0-9]{4})')
	return a.match(string)


