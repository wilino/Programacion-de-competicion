# Zapping - Número Mínimo de Cambios de Canal

Este proyecto resuelve el problema de encontrar el número mínimo de veces que debemos pulsar los botones de "siguiente canal" o "anterior canal" para pasar de un canal A a un canal B en una televisión con canales circulares del 1 al 99.

- Enunciado original del problema: [Acepta el Reto - Problema #166](https://aceptaelreto.com/problem/statement.php?id=166)

## Descripción del Problema

La televisión permite:
1. Pasar al siguiente canal, donde desde el canal 99 se regresa al canal 1.
2. Pasar al canal anterior, donde desde el canal 1 se regresa al canal 99.

Para calcular el menor número de cambios de canal necesarios para ir de A a B:
- Se puede avanzar de A a B.
- Se puede retroceder de A a B.
- Tomamos el mínimo entre ambas opciones.

### Ejemplo de Entrada y Salida

**Entrada**
```
2 5
2 99
5 63
63 5
0 0
```

**Salida**
```
3
2
41
41
```

---

## Estructura de la Solución

La solución está organizada en tres niveles de implementación: **Básico**, **Intermedio**, y **Optimizado**.

### 📂 Carpetas de Niveles de Implementación

1. **Basico**: Implementación didáctica que utiliza ciclos `for` para recorrer los canales de uno en uno, contando cada cambio de canal hasta llegar al destino. Es ideal para principiantes que están aprendiendo a usar bucles.

2. **Intermedio: Utiliza lógica matemática directa para calcular la distancia entre canales, con condicionales simples para avanzar o retroceder, sin el uso de bucles.

3. **Optimizado]**: Implementación altamente optimizada con cálculos modulares para encontrar las distancias, eliminando condicionales y utilizando `scanf` y `printf` para una entrada/salida más rápida. Esta versión es ideal para competiciones de programación donde el tiempo de ejecución es crítico.


---

## Explicación de los Métodos

1. **Básico (Didáctico)**:
   - Utiliza ciclos `for` para avanzar de canal en canal, contando cada cambio. Recorre manualmente los canales para enseñar el uso de bucles.

2. **Intermedio**:
   - Usa una lógica más directa con condicionales para calcular la distancia de avance y retroceso sin ciclos, aprovechando aritmética modular.

3. **Optimizado**:
   - Usa `scanf` y `printf` para mejorar la velocidad de entrada/salida.
   - Calcula las distancias usando operaciones modulares sin condicionales, minimizando el tiempo de ejecución.

Estas optimizaciones permiten que la versión final se ejecute de forma muy rápida, ideal para casos grandes o para optimizar el rendimiento en entornos competitivos.

--- 

## Notas Adicionales

- La versión básica es ideal para quienes desean entender el flujo básico de avance y retroceso entre canales.
- La versión optimizada es recomendada para competiciones de programación donde el tiempo de ejecución es un factor clave.
- Puedes consultar el [enunciado del problema](https://aceptaelreto.com/problem/statement.php?id=166) para más detalles sobre el desafío.
