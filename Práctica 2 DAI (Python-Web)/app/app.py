#./app/app.py
from flask import request, redirect, url_for
from funciones import *
from flask import Flask, render_template
import time
import sys

app = Flask(__name__)


@app.errorhandler(404)
def pagina_no_definida(error):

    return	'''
                    <!DOCTYPE html>
                    <html>
                      <head>
                        <meta charset="utf-8">

                        <title>Ejercicio 2 DAI</title>
                        <meta name="viewport" content="width=device-width, initial-scale=1.0">
                        <meta name="author" content="Javier Ruiz de Valdivia Torres">
                        <link href="/static/style.css" rel="stylesheet" type="text/css" />
                      </head>
                      <body>
                            <div class="Error">
                              <h1 class="error">La url no está definida </h1>
                              <img class="imagen" src="/static/img/error.jpg"/>
                            </div>
                      </body>
                    </html>
    			'''



@app.route('/')
@app.route('/static')
def index():
    return	'''
                    <!DOCTYPE html>
                    <html>
                      <head>
                        <meta charset="utf-8">

                        <title>Ejercicio 2 DAI</title>
                        <meta name="viewport" content="width=device-width, initial-scale=1.0">
                        <meta name="author" content="Javier Ruiz de Valdivia Torres">
                        <link href="/static/style.css" rel="stylesheet" type="text/css" />
                      </head>
                      <body>
                        <div>
                    			<h1>Práctica 2 DAI (Javier Ruiz de Valdivia Torres)</h1>
                    			<h3>Índice</h3>
                                <div class="lista">
                        			<ol>
                        				<li><a href="http://localhost:5000/ordena/5,2,7,3"> Algoritmos de ordenación</a></li>
                        				<li><a href="http://localhost:5000/criba/100"> Criba de Eratóstenes</a></li>
                        				<li><a href="http://localhost:5000/fibonacci/6"> Sucesión de Fibonacci</a></li>
                        				<li><a href="http://localhost:5000/cadenabalanceada/[[[]]]"> Comprobación de cadena balanceada de corchetes</a></li>
                        				<li><a href="http://localhost:5000/expresionesregulares/1234-5678-9012-3456"> Comprobación de apellidos, email y tajerta de crédito</a></li>
                        			</ol>

                                <img class="imagen" src="/static/img/mate.jpg"/></div>
                        </div>
                      </body>
                    </html>
    			'''


@app.route('/ordena/<lista>', methods=['GET','POST'])
def ordenacion(lista):
    m1= m2 = [lista]

    start = time.process_time()
    burbuja(m1)
    end = time.process_time()
    t1=start-end
    start = time.process_time()
    burbujaCorto(m2)
    end = time.process_time()
    t2=start-end
    c = "La lista inicial era: " + lista
    c += ". El resultado por ordenación por burbuja es: " + str(m1).strip('[]')
    c += ". El tiempo del algoritmo por burbuja ha sido: " + str(t1)
    c += ". El resultado por ordenación por burbuja corta es: " + str(m2).strip('[]')
    c += ". El tiempo del algoritmo por burbuja corta ha sido: " + str(t2)
    return c

@app.route('/criba/<int:limite>', methods=['GET','POST'])
def criba(limite):
    numeros = list(range(limite))
    primos = [ ]

    for i in range(2, limite):
    	if numeros[i] != -1:
    		primos.append(numeros[i])
    	for j in range(i, limite, i):
    		numeros[j] = -1

    c = "Los números primos hasta el " + str(limite) + " son los siguientes: " + str(primos)
    return c

@app.route('/fibonacci/<int:n>', methods=['GET','POST'])
def fibonacci(n):
    a, b = 0, 1

    while a < n:
    	a, b = b, a+b

    c = "El numero "+str(n)+"-esimo de la sucesión de Fibonacci es "+str(a)
    return c

@app.route('/cadenabalanceada/<cadena>', methods=['GET','POST'])
def cadenabalanceada(cadena):
    total=0
    error=""
    c="La cadena es : " + cadena
    for i in range(len(cadena)):
    	# Cuando sean de apertura sumar, si no restar, si la cuenta negativa, mal formato
    	if (cadena[i] == "["):
    		total += 1
    	else:
    		total -= 1
    	if (total < 0):
    		error = ". Corchete mal puesto en posición " + str(i+1)

    if (total > 0 or error!=""):
        c += ". CADENA NO BALANCEADA"
        if (error!=""):
            c += error
    else:
    	c += ". CADENA BALANCEADA"

    return c


@app.route('/expresionesregulares/<cadena>', methods=['GET','POST'])
def expresionesregulares(cadena):
    c="La palabra introducida es: " + cadena
    if palabraYMayuscula(cadena):
        c+=". Es primer apellido"
    elif email(cadena):
        c+=". Es un email"
    elif tarjetaCredito(cadena):
        c+=". Es un nº de tarjeta de crédito"
    else:
        c+=". No es ni primer apellido, ni email ni un nº de tarjeta de crédito"
    return c
