
# Problema: Sede Mundial

**Enunciado**: [Sede Mundial - Acepta el Reto](https://aceptaelreto.com/problem/statement.php?id=709)

## Descripción

El problema consiste en determinar la candidatura ganadora de la sede mundial en función de los votos recibidos. Si existe un empate entre las candidaturas con la mayor cantidad de votos, el resultado debe ser "EMPATE". Cada caso de prueba incluye una cantidad de votos para distintas candidaturas, y el programa debe determinar la sede ganadora o indicar un empate.

## Entrada

- La entrada contiene un número `N` que indica la cantidad de votos.
- Luego, se listan `N` nombres de candidaturas, cada uno representando un voto a favor de dicha candidatura.

## Salida

- Si hay una candidatura con el mayor número de votos, se imprime el nombre de dicha candidatura.
- Si existe un empate entre las candidaturas con el número máximo de votos, se imprime `"EMPATE"`.

## Ejemplo

**Entrada**

5
Brasil Brasil Bolivia Bolivia Argentina
0

**Salida**

EMPATE

## Soluciones

### Versión Didáctica

La versión didáctica del código está diseñada para ser clara y fácil de entender. Utiliza un arreglo de estructuras para almacenar las candidaturas y sus conteos de votos, lo que facilita el aprendizaje de estructuras básicas en C++.

- **Estructura de Datos**: Utiliza un arreglo de estructuras `Candidatura` para almacenar cada candidatura y su cantidad de votos.
- **E/S**: Emplea `scanf` y `printf` para una lectura y escritura eficiente, y `getchar` para leer los nombres carácter por carácter.
- **Funcionamiento**: Primero, se leen los nombres y se cuentan los votos. Luego, se determina la candidatura con el máximo de votos y se verifica si hay empate.

### Versión Optimizada

La versión optimizada está diseñada para mejorar el rendimiento en la entrada y salida, así como en la gestión de votos por candidatura, utilizando un `unordered_map`.

- **Estructura de Datos**: Emplea `unordered_map` para almacenar el conteo de votos por candidatura, lo cual permite una búsqueda y actualización rápidas.
- **E/S**: Utiliza `scanf` y `printf` para la entrada y salida rápida.
- **Funcionamiento**: Se leen los nombres de candidaturas y se actualiza el conteo de votos en el `unordered_map`. Luego, se determina la candidatura con el mayor número de votos y se verifica si hay empate.

## Comparación de Rendimiento

- **Versión Didáctica**: Tiempo aproximado de 0.38 segundos.
- **Versión Optimizada**: Tiempo aproximado de 0.24 segundos, mejorando el rendimiento al usar `unordered_map` y funciones rápidas de E/S.

## Notas

- La versión didáctica es más adecuada para fines de aprendizaje, mientras que la versión optimizada es ideal para contextos competitivos donde el rendimiento es crítico.
- Este problema es un buen ejercicio para aprender sobre el uso de estructuras de datos, manipulación de cadenas y técnicas de optimización en C++.
