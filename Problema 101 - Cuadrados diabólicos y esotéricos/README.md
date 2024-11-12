🧩 Cuadrado Diabólico y Esotérico

Este programa determina si un cuadrado de tamaño n x n es un cuadrado diabólico, esotérico, o ninguno de los dos, basándose en propiedades específicas de los cuadrados mágicos.

[	Enunciado original del problema: Acepta el reto - Problema #101](https://aceptaelreto.com/problem/statement.php?id=101)

📋 Descripción del Problema

Un cuadrado de n x n es:
	•	Diabólico si la suma de sus filas, columnas y diagonales principales es constante.
	•	Esotérico si es un cuadrado diabólico y cumple además con las siguientes propiedades adicionales:
	•	Contiene todos los números del 1 al n^2.
	•	La suma de las esquinas es igual a 4 * CM / n, donde CM es la constante mágica.
	•	Si n es impar:
	•	La suma de los valores en el centro de cada lado es igual a 4 * CM / n.
	•	El valor del centro del cuadrado multiplicado por 4 es igual a 4 * CM / n.
	•	Si n es par:
	•	La suma de las cuatro casillas centrales es igual a 4 * CM / n.

🔢 Ejemplo de Entrada y Salida

Entrada

4
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
3
1 2 3
4 5 6
7 8 9
0

Salida

DIABOLICO
NO

📥 Entrada

	1.	La entrada comienza con un número n que indica el tamaño del cuadrado. n = 0 indica el final de la entrada.
	2.	Cada cuadrado se describe con una matriz de n x n enteros.

📤 Salida

Para cada cuadrado:
	•	Imprime ESOTERICO si el cuadrado es esotérico.
	•	Imprime DIABOLICO si el cuadrado es diabólico pero no esotérico.
	•	Imprime NO si el cuadrado no es diabólico.

⚙️ Implementación

El código se organiza en dos funciones principales: esDiabolico y esEsoterico, junto con la función main para la lectura y procesamiento de cada cuadrado.

esDiabolico

Esta función verifica si un cuadrado cumple con las propiedades de un cuadrado diabólico:
	1.	Calcula la constante mágica como la suma de la primera fila.
	2.	Comprueba que cada fila y columna sume la constante mágica.
	3.	Verifica que ambas diagonales principales también sumen la constante mágica.

Si todas las sumas coinciden, asigna la constante mágica a constanteMagica y devuelve true. Si alguna suma no coincide, devuelve false.

esEsoterico

Esta función verifica si un cuadrado diabólico cumple con las condiciones adicionales para ser esotérico:
	1.	Comprueba que contiene todos los números del 1 al n^2.
	2.	Verifica que la suma de las esquinas y el centro (o las casillas centrales, si n es par) cumplan con las condiciones de un cuadrado esotérico.

main

La función main controla el flujo general:
	1.	Lee el tamaño n del cuadrado y, mientras n no sea cero, continúa leyendo y procesando cada cuadrado.
	2.	Llama a esDiabolico para verificar si el cuadrado es diabólico.
	3.	Si es diabólico, llama a esEsoterico para comprobar si cumple las condiciones adicionales para ser esotérico.
	4.	Imprime ESOTERICO, DIABOLICO o NO según corresponda.


🔍 Notas Adicionales

	•	La función esDiabolico utiliza all_of y accumulate de la biblioteca <numeric> para simplificar la verificación de sumas constantes.
	•	esEsoterico verifica las condiciones adicionales de los cuadrados esotéricos para cuadrados pares e impares, asegurándose de que el cuadrado contiene todos los números necesarios.

Este README.md describe detalladamente el funcionamiento del programa y cómo el código verifica las propiedades de los cuadrados mágicos para clasificarlos.

Espero que esta versión estructurada del README.md sea más visual y fácil de leer, manteniendo toda la información necesaria sobre el programa y su implementación.
