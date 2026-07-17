/*
Problema sobre palíndromos:
Hallar la cantidad de caminos con palabras palíndromas de vértice i en el árbol de nodos
- Input:
    - n = Número de vértices
    - Las siguientes n-1 líneas notan conexiones de los nodos u al v, denotando conexiones en los nodos o vértices
    - La última línea se escribe el string para realizar el árbol
Ejemplo:
>   5
>   1 2
    2 3
    3 4
    3 5
>   abcbb
a -> b(1)
b(1) -> c
c -> b(2)
c -> b(3)
Dato: Se puede volver hacia atrás en los vértices del árbol
SOLUCIÓN:
Usar másk y en conjunto con el XOR, asignando si contiene la letra correspondiente con criptoaritmético:
    Siendo el caracter 'a' como cifra de mayor orden hasta el máximo caracter por valor disponible 
    en todos los nodos (en el ejemplo sería 'c').
Cuando comparamos el nodo i hasta el nodo C1, verificamos con qué valores poseen, digamos que si el nodo i
tiene como valor binario 111 (pasó por un b, a y c; no es necesario un orden) y su opuesto, que tiene de 
valor 110 (pasó por a, b; pero no posee c en su rama).
    Comparar los valores de los más alejados y ver si después del XOR sale 0 en cada cifra; caso contrario,
    no se considera el camino.
*/