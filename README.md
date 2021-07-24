
# PROYECTO FINAL 

Buenas tardes ingeniero un cordial saludo de nuestra parte somos estudiantes del área de Ingeniaría TIC paralelo "A". El siguiente escrito tiene la finalidad de describir.
# INTEGRANTES DE GRUPO:
> Jenniffer Katherine Mina Preciado-líder de grupo 

> Posso Becerra Rosa Antonella

> Zambrano Zambrano Arely Tatiana

> Andrea Isabel Palacios Becerra

Primero la líder de grupo 
##### Mina Preciado
subió el archivo principal la cual nos va a servir para poder llamar a las funciones y poder realizar ciertos procesos que nos indica el programa y así mismo ingresar las variables que vamos a utilizar.

##### Posso Becerra  Rosa Antonella
ingresar los datos y calcular la edad.

##### Zambrano Zambrano Arely Tatiana
a esta participante le toco calcular el peso y mostrar por pantalla si está bien o mal de salud y una recomendación de que puede hacer para solucionarlo.

##### Andrea Isabel Palacios Becerra
a este participante le toca guardar el archivo a una terminal (.txt )

###### Mina Preciado Jenniffer Katherine 
Ester participante lo que hizo fue recuperar los datos en el archivo con la terminal ( .txt ) 

###### Composición:
Este proyecto está conformado por dos archivos ( principal.cpp) y (Fcolaboradores.h):
## Archivo Principal.cpp
Para empezar, usamos las librerías
###### # include < iostream >
######  #include < stdlib.h >
###### # include < iostream >
También usamos el llamado a la función Fcolaboradores.h donde se va a empezar la clase que vamos a usar.
 
## Archivo Fcolaboradores.h
En este archivo podemos encontrar las funciones String.h que permiten ingresar caracteres o letras, y que en este caso lo usamos para declarar la variable nombre.
Aquí también encontramos la clase Persona(class Persona).


###### Descripción:
##### Principal.cpp
include<stdlib.h> esta es una librería estándar en c++ que permite utilizar multiples funciones.
include <fstream> esta librería la usamos para poder crear el archivo (.txt) y a la vez recuperar los datos de ese archivo.
include "Fcolaboradores.h” aquí se hace el llamado al archivo donde se encuentra la clase.
En la función Principal del programa ( int main() ) comenzamos por declarar las variables principales:
(string nombres;) este es para declarar la variable nombre y colocamos string debido a que son letras.
(Persona lisa;)aquí se nombra a la clase para poder hacer el llamado a todas sus funciones.
A continuación colocamos la estructura condicional (switch (op)) que me permite definir múltiples casos que puede llegar a cumplir una variable cualquiera y qué acción tomar en cualquiera de esta situaciones; En este caso la usaremos para presentar un menú inicial que le permita al usuario escoger la opción que desee realizar con el programa. Dentro de esta estructura condicional se encuentra el llamado a la clase persona dependiendo de que función elija el usuario realizar.
(lisa.ingresar_datos(); )   


##### Fcolaboradore.h 
 include<string.h>   Esta librería me permite ingresar datos con letras o caracteres.
(class Persona) En esta clase colocamos todas las funciones que realiza el programa. 
Primero declaramos los atributos de Class persona los declaramos en private puesto que estás son características únicas de la clase que solo puede modificar el usuario. 
public: colocaremos los atributos generales y también los métodos y funciones que necesita el programa. 
Entre las funciones están:
vaid  Ingresar_dato() en la que se van a pedir, ingresar y mostrar los datos del usuario.
void calcular_edad(int dia_actual, int mes_actual, int ano_actual) en la que se calcula la edad a partir de la fecha de nacimiento y  fecha actual.
void indice_corporal() en la que se calcula el índice de masa corporal a partir de su peso y altura.  
void guardar() En donde vamos a crear un archivo (.txt) y guardar los datos ingresados anteriormente.
void recuperados() En donde recuperaremos los datos del archivo (.txt) y los mostraremos por pantalla.


Pasos para la descargar el programa a un computador.
1.	Para hacer este proceso vas a buscar https://github.com/  o en la aplicación Github instalada en tu computadora la persona que crees que te pueda prestar su código para hacer 

2.	luego de haber buscado el perfil de esta persona entras a sus repositorios.

3.	Luego aplastas alguno de sus proyectos 

4.	Aplastas el los archivos que esta subidos en sus repositorios registrados por ejemplos estos archivos puedes terminar como (.cpp) o (.h).

5.	Luego de aplastar en el archivo o código en la parte derecha pon en el lápiz y copia el código.

6.	Luego de haber copiado este código pégalo en una apk que utilices para codificar este puede ser DEV c++, visual studio, termux o en cualquier apk que utilices y guárdalo con la termina que tiene esa persona en su repositorio como dije anteriormente que podría ser (.cpp) o (.h).

7.	Y empieza a modificar el código según los arreglos que necesite para que sea mejor su calidad Asia el usuario.


//Jenniffer Mina Preciado 
Ejecución: Describir como el usuario pude ejecutar el programa en su máquina (colocar captura de pantalla)

1.	 Primero al ejecutas el programa te sale una pantalla con un menú incluido. 

[![](https://1.bp.blogspot.com/--S820Y-9-kc/YPyJ4Js0L2I/AAAAAAAAAB4/t0ki_BZmVK4mPwTMgNL1ZC8NlRXebaUDACLcBGAsYHQ/s472/1.jpeg)
Ese menú muestra cada punto e indicación de lo que se va a preguntar en el desarrollo de su ejecución.

[![](https://1.bp.blogspot.com/-Pe11Eu1adjA/YPyGihAUjjI/AAAAAAAAABA/XbDrxIbY_VEP4ksNbQieCirXLV7miI0GgCLcBGAsYHQ/w428-h297/2.jpeg)

2.	Tienes que aplastar cada opción poniendo su numero es decir primero vas a hacer el punto 1 (aplastas 1) y enter .

Como puedes ver en pantalla te salen las indicaciones de lo que tiene que ingresar y así mismo los vas a ingresar 
Por ejemplo:

[![](https://1.bp.blogspot.com/-eU9UO-IzyiY/YPyGknoaLDI/AAAAAAAAABE/PaBRRC56Tt0mv-E0Jx25HE8Gk35ihmSHACLcBGAsYHQ/w432-h231/3.jpeg)
Luego de ingresar tus datos se presenta por pantalla para ver si esta bien ingresados 

3.	Luego aplastamos enter y la pantalla se limpia para aplastar la opción dos.

[![](https://1.bp.blogspot.com/-uWn8rjsNQ6w/YPyGl6o-djI/AAAAAAAAABI/eYVaXKn4sXoQgcb0NjLb4TIne-L1oCYEACLcBGAsYHQ/w566-h392/4.jpeg)

Como nos dice el mensaje esta opción va a calcular tu edad y lo que tienes que hacer para que calcule tu edad actual es simplemente poner la fecha actual porque los datos de tu fecha de nacimiento te los pregunto anteriormente.

Luego que porgas los datos que te solicita te presenta por pantalla tu edad tus días y tu hora.

4.	Luego aplastamos enter y se limpiara la pantalla nuevamente luego ingresas la opción.
(opción 3) 

[![](https://1.bp.blogspot.com/-IP72NbuG6LU/YPyGnNwKH-I/AAAAAAAAABM/xkE5JCO_rdgAvZ4Ib3R_oFdaboIBToTgACLcBGAsYHQ/w471-h174/5.jpeg)
Esta opción te va a mostrar tu índice corporal y un comentario para que estés saludable.

5.	Luego aplastas enter y la opción siguiente que seria la 4.

[![](https://1.bp.blogspot.com/-4wy4ipI16pI/YPyGoqAAFYI/AAAAAAAAABQ/vjv8wBUMESMgWM3KNIx5U8GWhN1zYWaggCLcBGAsYHQ/s604/6.jpeg)
Esta opción nos va a servir para guardar en un archivo (.txt) 

[![](https://1.bp.blogspot.com/-od6V7xeISUM/YPyHJaxzGjI/AAAAAAAAABw/KU-JXCVYuN0-vYdLtn440xBQYn7zoN9YQCLcBGAsYHQ/s606/7.jpeg)

6.	Luego aplastas enter y pones la siguiente y última opción. 

Opción 5 
Esta opción va a mostrar los datos que están en el archivo (.txt)

[![](https://1.bp.blogspot.com/-moSDGjo2p0I/YPyGsOsgS0I/AAAAAAAAABY/5rPUYAct1lks3r2GImZPhBbEo5wShEelgCLcBGAsYHQ/w473-h348/8.jpeg)




