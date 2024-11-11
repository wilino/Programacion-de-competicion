# Constante de Kaprekar

Este repositorio contiene implementaciones en C++ del famoso problema de la constante de Kaprekar descubierto por D. R. Kaprekar en 1949. El número 6174 es conocido como la constante de Kaprekar debido a su peculiar propiedad matemática.

## Descripción del Problema

El problema de la constante de Kaprekar implica lo siguiente:

1. **Elegir cualquier número de cuatro dígitos** (donde al menos dos dígitos sean diferentes), que no sea un repdigit (todos los dígitos iguales).
2. **Reordenar los dígitos** para formar el mayor y el menor número posible y restar estos dos valores.
3. **Continuar el proceso** con el nuevo número obtenido y repetir el proceso.
4. Eventualmente, el número 6174 es alcanzado y el proceso se estabilizará en este número, formando un bucle.

Por ejemplo:
- Partiendo del número 3524, se alcanza la constante de Kaprekar en 3 iteraciones.

Este fenómeno se repite con cualquier número inicial de cuatro dígitos (que cumpla las condiciones mencionadas), llegando siempre al número 6174.

## Contenido del Repositorio

Este repositorio incluirá diferentes implementaciones del algoritmo para alcanzar la constante de Kaprekar:

- **Versión Básica:** Implementación directa del algoritmo.
- **Versión Didáctica:** Código fuente diseñado para ser especialmente útil para enseñar a principiantes los conceptos básicos de la programación, incluyendo el uso de funciones, bucles, y estructuras de datos simples.
- **Versión Optimizada:** Una versión que mejora el rendimiento evitando redundancias y utilizando técnicas de optimización de código.


Enlace del Ejercicio: https://aceptaelreto.com/problem/statement.php?id=100
