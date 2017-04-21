---

# Taller de Programación Competitiva

Universidad de Lima

Hernan Quintana (hquintan@ulima.edu.pe)

---

# Objetivos

## Largo plazo

- Lograr clasificar a una competencia internacional de programación.
- Conocer tópicos básicos de ciencias de la computación que les
  permitan desarrollarse a nivel profesional en organizacion *TOP* a nivel
mundial.
- Generar iniciativas de investigación en tópicos 

+++

## Mediano / corto plazo

- Mejorar y/o cultivar skills algorítmicos.
- Crear sentimiento de grupo.

---

# Reglas

- *COMPROMISO.* Que se explica en las siguientes reglas:
 - Asistencia máxima a las sesiones.
 - Cumplimiento con las tareas acordadas.
 - Práctica, práctica, práctica y más práctica.
- *Todos* son bienvenidos. El único requisito es cumplir las reglas
  anteriores.

---

# Dinámica de las sesiones

1. Presentación del tema de la sesión *(60 minutos)*
2. Resolución de 3 problemas referentes al tema. *(70 minutos)*
3. Explicación de la resolución de los 3 problemas.*(30 minutos)*
4. Organización de la siguiente sesión. *(10 minutos)*

---

# Cronograma

## Sesión 1

* Prueba clasificación
* Introducción al C
* Notación Big O

---

## Sesión 2

### ESTRUCTURAS DE DATOS

Lineales

* Arreglos estáticos,  dinámicos y de booleanos.
* Bitmask
* Linked List
* Stack
* Queue
* Double-ended Queue (Deque)

+++

No Lineales

* Balanced Binary Search Tree (BST)
* Heap
* Hash Table
* Graph

---

## Sesión 3

### ALGORITMOS DE BÚSQUEDA

* Técnica Complete Search: Iterativa y recursiva.
* Técnicas Divide & Conquer:
* Búsqueda binaria
* Algoritmos Greedy

---

## Sesión 4

### PROGRAMACIÓN DINÁMICA

* Comparación con otras técnicas.
* Ejercicios clásicos y no clásicos.

## Sesión 5

*Primer Simulacro de Concurso*

---

# Diferencias con cursos de programación *tradicionales*.

+++

## Tipear código rápidamente -> _PRACTICA_

- Práctica, práctica y más práctica.
- Conocerás atajos de teclado -> _NO UTILIZAR EL MOUSE PARA NADA_
- Utilizaremos (y aprenderán) el editor VIM.

+++

## Identificar problemas tipo y saber como resolverlos

- Según avancemos iremos viendo más y más tópicos.

+++

## Hacer análisis de algoritmos

Si tienes data de entrada de 100K (10<sup>3</sup>) y tu algoritmo tiene
complejidad de O(2) o O(n<sup>2</sup>), entonces significa que tu
algoritmo tardará (10K)<sup>2</sup>, esto es 10<sup>10</sup> que es un
número muy grande que hará tardar demasiado el algoritmo. Por lo tanto,
necesitamos mejorar ese algoritmo.

+++

## Masterizar un lenguaje de programación

- Se tiene que conocer las características propias de un lenguaje de
programación para poder resolver de una manera más rápida los problemas.
- El C/C++ es uno lenguaje de programación más utilizados en los
concursos de programación por su *versatilidad*.

---

# Introducción al C

---

# Recursos

- [C](https://www.tutorialspoint.com/cprogramming/c_overview.htm)
- [C++](http://www.tutorialspoint.com/cplusplus/)
- [Vim Tutorial](http://www.glump.net/files/2012/08/vi-vim-cheat-sheet-and-tutorial.pdf)
- [Vim Cheatsheet](https://vim.rtorr.com/)
- Libro: Stanley B. Lippman, Josée Lajoie, Barbara E. Moo-C++
Primer-Addison-Wesley Professional (2012)
- Libro: Steven Halim, Felix Halim-Competitive Programming 3 The New
Lower Bound of Programming Contests-Lulu.com (2013)
- Libro: Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest,
Clifford Stein-Introduction to Algorithms-MIT (2009)

---

# Proceso de compilación y enlazado

+++

![Proceso de Compilación](http://www.binaryupdates.com/wp-content/uploads/c-code-compilation-process.jpg)

+++

1. El compilador lee el código fuente y genera lo que se llama el código
máquina. Este código no se puede ejecutar (archivo .o). __Step1, Step2 y
Step3__.
2. El compilador __enlaza__ el código máquina (objeto) generado con otros
programas compilados y genera el ejecutable (archivo .exe). __Step4__.
3. Se ejecuta el archivo .exe generado.

---

# Compilador C

Existen varios compiladores de C/C++. Nosotros utilizaremos el gcc o GNU
C Compiler. Para el caso de C++ el compilador que podemos utilizar el
g++.

Para instalar el compilador (en máquinas windows porque Linux y Mac OS
ya viene instalado por defecto), se recomienda utilizar el
[MinGW](https://sourceforge.net/projects/mingw/files/). En el sitio GIT
de esta presentación también se encuentra un HOWTO de cómo instalarlo en
Windows.

+++

## Ejemplo

Tenemos el siguiente código:

```c
#include <stdio.h>

int main(int argc, char **argv)
{
  char str1[20];
  printf("Ingrese un numero:\n");
  scanf("%s", str1);
  printf("El número que ingresó es el siguiente: %s\n", str1);
}
```

+++

## Ejemplo en C++


```c
#include <iostream>
#include <string>

using namespace std;


int main()
{
  string pal="";

  while (cin >> pal)
  {
    cout << pal << " ";
  }
  cout << "\n\n";
}
```

- ¿Cómo podríamos leer de un archivo y no de la entrada estándar?

+++

## Otro ejemplo

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string pal="";

  while (getline(cin, pal))
  {
    cout << pal << endl;
  }
}
```

---

## Problema

Resolver el problema del Cap 1.1 de Halim.

---

## Tarea

- Cap 1 de C++ Primer
- Lectura de Capitulo 1 del Halim. Opcional el ejercicio del capítulo
1.1. 

