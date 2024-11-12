
# Encriptación de Mensajes de Mensajes

Este proyecto resuelve el problema de encriptación y desencriptación de mensajes usando el cifrado César, un tipo de cifrado por desplazamiento. El objetivo es descifrar un mensaje en base a un desplazamiento específico y contar las vocales no acentuadas en el mensaje resultante.

- Enunciado original del problema: [Acepta el Reto - Problema #102](https://aceptaelreto.com/problem/statement.php?id=102)

## Descripción del Problema

El problema consiste en decodificar mensajes cifrados en un formato específico:
1. El primer carácter del mensaje define el desplazamiento necesario para que el primer carácter del mensaje codificado se transforme en la letra `'p'`.
2. Tras calcular el desplazamiento, el mensaje se decodifica aplicándolo a cada letra.
3. Finalmente, se cuenta el número de vocales no acentuadas (`a, e, i, o, u`) en el mensaje decodificado y se imprime.

### Ejemplo de Entrada y Salida

**Entrada**
```
qMensaje codificado
rOtro mensaje codificado
sFin del mensaje
pFIN
```

**Salida**
```
5
4
6
0
```

---

## Estructura de la Solución

La solución está dividida en tres niveles de implementación: **Básico (didáctico)**, **Avanzado (uso de métodos de cadenas)**, y **Optimizado**.

### 📂 Carpetas de Niveles de Implementación

Cada carpeta contiene una implementación de la solución con un nivel de complejidad diferente:

1. **Basico**: Implementación didáctica, sin uso de funciones avanzadas de C++. Se utilizan bucles y operaciones básicas para una mayor comprensión.
   
2. **Avanzado**: Implementación que utiliza métodos de la biblioteca estándar de C++, como `find` en cadenas y `count_if` para contar vocales, optimizando ligeramente la estructura sin sacrificar claridad.

3. **Optimizado**: Implementación optimizada en términos de rendimiento. Se usa `unordered_set` para búsquedas rápidas de vocales, se minimizan los bucles y la lógica está simplificada para tiempos de ejecución menores.


---

## Explicación de los Métodos

1. **Básico (Didáctico)**:
   - No se usan funciones avanzadas ni estructuras de datos complejas. El código está organizado en bucles y condicionales simples, ideal para quienes están comenzando en programación.
   
2. **Avanzado (Uso de Métodos de Cadenas)**:
   - Se usa el método `find` para verificar vocales dentro de una cadena de vocales, y `count_if` para contar elementos que cumplen con la condición.
   
3. **Optimizado**:
   - Uso de `unordered_set` para búsquedas en tiempo constante.
   - Se evita el uso de lambdas dentro de `count_if` y se recurre a funciones simplificadas para optimizar el flujo y reducir la sobrecarga en tiempo de ejecución.

Estas optimizaciones ayudan a reducir el tiempo de ejecución, especialmente para entradas grandes, aprovechando estructuras de datos eficientes y simplificando el flujo lógico.

---

## Notas Adicionales

- La solución básica es ideal para quienes desean entender el flujo lógico del cifrado César sin distracciones.
- La versión avanzada y la optimizada son adecuadas para mejorar el rendimiento en situaciones de datos de gran tamaño o con alta frecuencia de ejecución.
- Puedes consultar el [enunciado del problema](https://aceptaelreto.com/problem/statement.php?id=102) para más detalles.

