Aquí tienes el contenido para el archivo README.md con una descripción clara del problema, la solución y un enlace al enunciado.

# Los Amigos de Mis Amigos Son Mis Amigos

Este proyecto resuelve el problema de encontrar el grupo de amigos más grande en una ciudad donde las relaciones de amistad son transitivas. Si una persona es amiga de otra, y esa otra persona es amiga de una tercera, entonces la primera y la tercera también son amigas. El objetivo es determinar el tamaño del grupo de amigos más grande en esta red de relaciones.

- Enunciado original del problema: [Acepta el Reto - Problema #928707](https://aceptaelreto.com/problem/submission.php?id=928707)

## Descripción del Problema

Se nos da un conjunto de personas y pares de amistades, representando relaciones de amistad entre ellos. Nuestra tarea es:
1. Modelar estas relaciones de amistad como un grafo no dirigido, donde cada persona es un nodo y cada amistad es una arista entre dos nodos.
2. Encontrar el componente conectado más grande en este grafo, que representa el grupo de amigos más grande.

### Ejemplo de Entrada y Salida

**Entrada**

2
3 2
1 2
2 3
10 10
1 2
3 1
3 4
5 4
3 5
4 6
5 2
7 10
9 10
8 9

**Salida**

3
6

---

## Estrategia de Solución

1. **Modelado con Union-Find**:
   - Representamos cada persona como un nodo y cada relación de amistad como una arista.
   - Utilizamos una estructura de datos Union-Find para encontrar y unir componentes conectados en el grafo.

2. **Componentes Conectados**:
   - Para cada componente conectado, mantenemos un contador de tamaño.
   - Al unir dos nodos, actualizamos el tamaño del componente más grande cuando corresponde.

3. **Encontrar el Tamaño Máximo**:
   - Al final, obtenemos el tamaño del grupo de amigos más grande en cada caso de prueba.

### Implementación en C++

La solución está implementada en C++ utilizando una estructura Union-Find optimizada con compresión de caminos y unión por rango para una ejecución eficiente, incluso con muchas personas y relaciones.

---

## Estructura del Código

1. **Clase UnionFind**:
   - Mantiene la estructura de conjuntos disjuntos con tres vectores (`padre`, `rango` y `tamano`) y una variable (`tamanoMaximo`) para rastrear el tamaño del componente de amigos más grande.
   
2. **Función `encontrar`**:
   - Devuelve el representante de un nodo aplicando compresión de caminos para optimizar futuras consultas.

3. **Función `unir`**:
   - Une dos nodos en un mismo componente, aplicando unión por rango para mantener el árbol balanceado y actualiza el `tamanoMaximo` cuando es necesario.

4. **Función `obtenerTamanoMaximo`**:
   - Retorna el tamaño del componente conectado más grande.

---

Explicación de los Métodos

	1.	encontrar:
	•	Localiza el representante de un nodo y aplica compresión de caminos para mejorar el rendimiento en futuras búsquedas.
	2.	unir:
	•	Une dos componentes si sus representantes son diferentes, utilizando unión por rango y actualizando el tamaño del componente cuando corresponde.
	3.	obtenerTamanoMaximo:
	•	Devuelve el tamaño del grupo de amigos más grande encontrado.

Notas Adicionales

	•	Esta solución es óptima para los límites del problema debido a la eficiencia de la estructura Union-Find.
	•	Puedes consultar el enunciado del problema para más detalles sobre el desafío.

