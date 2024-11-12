

# Dividir Factoriales

Este proyecto resuelve el problema de dividir dos factoriales de la forma \(\frac{num!}{den!}\) con `num >= den`, aprovechando propiedades matemáticas para evitar el cálculo directo de factoriales completos, lo cual sería ineficiente y resultaría en números extremadamente grandes.

- Enunciado original del problema: [Acepta el Reto - Problema #190](https://aceptaelreto.com/problem/statement.php?id=190)

## Descripción del Problema

El problema consiste en calcular la división \(\frac{num!}{den!}\), donde `num` y `den` son enteros no negativos y `num >= den`. Como calcular el factorial completo para números grandes sería ineficiente, observamos que:

\[
\frac{num!}{den!} = num \times (num - 1) \times \dots \times (den + 1)
\]

Esto permite reducir el problema a calcular el producto en un rango de números, desde `den + 1` hasta `num`, evitando los números extremadamente grandes que resultan al calcular factoriales completos.

### Ejemplo de Entrada y Salida

**Entrada**

5 2
6 5
8 3
17 8
1 2

**Salida**

60
6
6720
8821612800

---

## Estructura de la Solución

El proyecto está organizado en dos versiones para facilitar su comprensión y ejecución eficiente:

### 📂 Versiones

1. **Didáctica**: En esta versión, se usa un enfoque simple para calcular el producto en el rango adecuado. Ideal para comprender el problema sin optimizaciones adicionales.

2. **Optimizada**: En esta versión, se emplean varias optimizaciones para mejorar la eficiencia del código:
   - Uso de `scanf` y `printf` para mejorar la velocidad de entrada y salida.
   - Condiciones especiales para evitar bucles innecesarios, como cuando `num == den` (resultado directo `1`) o `num == den + 1` (resultado directo `num`).


---

Explicación de los Métodos

Versión Didáctica

	1.	Calcular el Producto en el Rango [den + 1, num]:
	•	Usamos un bucle simple para calcular el producto de los números entre den + 1 y num.
	•	Esta versión facilita la comprensión del problema y de la fórmula utilizada.

Versión Optimizada

	1.	Entrada y Salida Eficientes:
	•	Usamos scanf y printf para mejorar la velocidad de entrada y salida.
	2.	Condiciones Especiales para Evitar Cálculos Innecesarios:
	•	Si num == den, sabemos que el resultado es 1 (pues num! / num! = 1).
	•	Si num == den + 1, el resultado es simplemente num (ya que el cociente es num! / den! = num).

Estas optimizaciones reducen el tiempo de ejecución en pruebas con grandes valores de num y den.

Notas Adicionales

	•	La versión didáctica es ideal para aprender los fundamentos del problema.
	•	La versión optimizada es más adecuada para entornos competitivos, donde la eficiencia es clave.
	•	Puedes consultar el enunciado del problema para obtener más detalles.

