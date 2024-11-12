# Último Dígito del Factorial

Este proyecto resuelve el problema de encontrar el último dígito del factorial de un número dado. Dado que los factoriales crecen muy rápido, este problema se enfoca únicamente en obtener el último dígito sin calcular el factorial completo, aprovechando patrones que se repiten en los últimos dígitos.

- Enunciado original del problema: [Acepta el Reto - Problema #114](https://aceptaelreto.com/problem/statement.php?id=114)

## Descripción del Problema

Dado un número entero `n`, queremos determinar el último dígito de `n!` (factorial de `n`).
1. Para valores de `n` entre 0 y 4, podemos calcular el último dígito directamente.
2. Para `n >= 5`, el último dígito del factorial siempre será 0, debido a que el factorial contiene al menos un factor de 10 (producido por factores de 5 y 2).

### Ejemplo de Entrada y Salida

**Entrada**
```
3
2
3
4
```

**Salida**
```
2
6
4
```

---

## Estructura de la Solución

La solución está organizada en diferentes niveles de optimización, diseñados para cumplir con los requisitos de velocidad de ejecución en competiciones de programación.

### 📂 Carpetas de Niveles de Implementación

Cada carpeta contiene una implementación con un enfoque de optimización distinto:

1. **Avanzado**: Utiliza arrays para almacenar los resultados de factoriales de 0 a 4 y simplifica el código evitando bucles innecesarios.

2. **Optimizado**: Implementación que maximiza la velocidad de E/S mediante el uso de `scanf` y `printf`, logrando tiempos de ejecución mucho más rápidos, adecuados para competencias.

### Archivos y Descripción de Cada Implementación

Cada carpeta contiene un archivo `main.cpp` con el código de la solución para el nivel correspondiente.

---


## Explicación de los Métodos

1. **Avanzado (Uso de Arrays)**:
   - Almacena los últimos dígitos en un array para un acceso directo, eliminando la necesidad de cálculos repetitivos.
   
2. **Optimizado (E/S rápida)**:
   - Uso de `scanf` y `printf` para entradas y salidas rápidas, reduciendo considerablemente el tiempo de ejecución, especialmente en pruebas grandes.

--- 

## Notas Adicionales

- La solución básica es ideal para quienes desean entender la lógica de los factoriales sin distracciones.
- La versión avanzada y la optimizada son adecuadas para mejorar el rendimiento, especialmente en problemas competitivos donde el tiempo de ejecución es crucial.
- Puedes consultar el [enunciado del problema](https://aceptaelreto.com/problem/statement.php?id=114) para más detalles.

--- 
