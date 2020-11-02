# Busqueda-Binaria

#### Creamos un programa que es capaz de realizar una búsqueda por el método de búsqueda binaria.

#### 1.	Primero insertamos las librerías iostream y conio.h, el using namespace std y el método main, que es lo que sebe llevar todo programa en c++.
![1](https://user-images.githubusercontent.com/71052252/97821665-dcbd9f80-1c78-11eb-909d-8ddf10f625a9.png)

#### 2.	Insertamos las variables que vamos a ocupar, incluido el arreglo.
![2](https://user-images.githubusercontent.com/71052252/97821666-dcbd9f80-1c78-11eb-9507-d827eafb91e8.png)

#### 3.	Pedimos el valor a buscar en el arreglo.
![3](https://user-images.githubusercontent.com/71052252/97821667-dcbd9f80-1c78-11eb-9e3a-0cdc93eeb08a.png)

#### 4.	Asignamos dos variables, una con el 0, y la otra con el numero de valores que tengamos en el arreglo, en este caso 5. Creamos un while y asignamos que la variable Inferior tiene que ser menor o igual a la variable superior. Sacamos la mitad sumando las variables superior e inferior y dividir entre 2. Creamos un condicional if, donde preguntamos si la variable mitad es igual al valor solicitado, en casi de ser así, la variable Comp pasa a ser verdadera y se cierra el ciclo. En caso de no ser así, se crean otros dos condicionales if, para buscar el valor solicitado.
![4](https://user-images.githubusercontent.com/71052252/97821660-db8c7280-1c78-11eb-80ef-d39da8d1c686.png)
 
#### 5.	Si se encuentra el valor, la variable Comp es verdadera y se imprime que se ha encontrado y la posición que ocupa en el arreglo, en caso de no encontrar el arreglo, se imprime que no se ha encontrado.
![5](https://user-images.githubusercontent.com/71052252/97821661-dc250900-1c78-11eb-9d9d-626769d3168d.png)

#### Ejecutamos el programa. 
![6](https://user-images.githubusercontent.com/71052252/97821899-a46a9100-1c79-11eb-8926-528c9d599498.png)
