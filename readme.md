# Input:
N -> Cantidad de ciudades
M -> Cantidad de vuelos

a -> origen 
b -> fin
d -> costo
m -> millas (-1 para descartar)

# Output:
La función debe retornar un arreglo de dos
números enteros: el primero indica el costo
mínimo en pesos para realizar el viaje, y el
segundo indica la mínima cantidad de millas
que es necesario canjear para obtener ese
costo mínimo posible.

* costo minimo : millas necesarias *

enum : {
    1 : bs as, 
    ...,  
    n : alejandria 
}

Combinaciones para la lista de posibles viajes igual n! (n factorial).

armar_lista_posibles_viajes -> [ array con los viajes posibles ]
[
    [ 1 2 10 -1 ] 
    [ 2 3 11 5 ]
    [ 3 4 7 -1 ]
]
,
[
    [ 1 2 10 -1 ] ,
    [ 2 4 8 -1 ]
]
calcular_millas_y_precio -> [ precio, millas, bandera(millas si o no) ]

[ 17, 5, true ]
[ 18, 0, false ]

determine_menor -> [ indice ]
[ 0 ]

1 2 10 -1
2 3 11 5

10 + 11 = 21 
10 + 5 = 15 

3 4 7 -1









