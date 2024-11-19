# ExamenParcial3-MiguelGodoy-RobertoCardenas
https://github.com/MiguelGodoy06/ExamenParcial3-MiguelGodoy-RobertoCardenas.git
# Enunciado
Estimado estudiante,

Para garantizar una correcta evaluación de tus habilidades y entendimiento en la programación en C++, hemos establecido un conjunto de condiciones que deberás seguir al momento de entregar tus respuestas al examen. La estructura y presentación de tu entrega son esenciales para facilitar el proceso de corrección y asegurarnos de que hemos evaluado todos tus esfuerzos de manera justa.

Instrucciones para la entrega:

Repositorio en GitHub:

Todo tu trabajo debe estar contenido en un repositorio en GitHub.
Asegúrate de que el repositorio sea privado al inicio, y podrás hacerlo público después de que finalice el período de revisión del examen (si así lo deseas).
Fichero ZIP:

Una vez hayas terminado de resolver el examen, crea un archivo ZIP de todo el repositorio.
El nombre del archivo ZIP debe seguir el formato: Apellido_Nombre_ExamenCPP.zip (reemplaza Apellido y Nombre con tu apellido y nombre respectivamente).
Fichero README.md:

Dentro de tu repositorio, debes incluir un archivo README.md.
Este archivo debe contener:
El link directo a tu repositorio de GitHub.
Una descripción breve de cada uno de los ejercicios resueltos, con referencias a los archivos o carpetas específicos donde se puede encontrar cada solución.
El uso adecuado de Markdown en tu README.md para estructurar y formatear el contenido será valorado positivamente.
Envío:

Entrega el archivo ZIP a través de la plataforma o método que se te indique (por ejemplo, un sistema de gestión de aprendizaje, correo electrónico, etc.).
Asegúrate de enviar tu trabajo antes de la fecha y hora límite. Las entregas fuera de plazo pueden no ser evaluadas o incurrir en penalizaciones.
Otros aspectos a considerar:

Asegúrate de que tu código esté bien comentado, organizado y que sea fácil de leer y entender.
Si utilizas alguna referencia externa para resolver algún ejercicio, es esencial que lo cites en tu README.md.
Siguiendo estas condiciones y presentando tu trabajo de manera organizada, nos ayudarás a llevar a cabo un proceso de revisión más eficiente. Deseamos que demuestres todo tu conocimiento y habilidades en este examen. ¡Buena suerte!





Parte 1: Preguntas de elección múltiple (20%)

¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?

a) C utiliza cout y cin mientras que C++ utiliza printf y scanf.
b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.
c) No hay ninguna diferencia.
d) C++ utiliza printf y scanf mientras que C utiliza std::cout y std::cin.

SOLUCIÓN
b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.

Explicación:
C:

Usa funciones como printf y scanf para realizar operaciones de entrada/salida.
Estas funciones son parte de la biblioteca estándar de C (stdio.h).
C++:

Utiliza los operadores de flujo std::cout (salida) y std::cin (entrada) para manejar entrada/salida.
Estas son parte de la biblioteca de entrada/salida de C++ (iostream).
Esto refleja una de las diferencias fundamentales en la filosofía de diseño: C++ está más orientado a objetos y utiliza conceptos como streams, mientras que C utiliza un enfoque más estructurado y basado en funciones.
#FUENTECHATGPT

¿Qué es un espacio de nombres en C++?
a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.
b) Una manera de definir variables.
c) Una función de la biblioteca estándar.
d) Un tipo de ciclo en C++.

SOLUCIÓN:
a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

Explicación:
Un espacio de nombres (namespace) en C++ es un contenedor que permite organizar y agrupar entidades como funciones, clases, objetos y variables bajo un nombre común para evitar conflictos de nombres.

Por ejemplo:
#include <iostream>

// Definición de un espacio de nombres
namespace MiEspacio {
    void mostrarMensaje() {
        std::cout << "Hola desde MiEspacio" << std::endl;
    }
}

int main() {
    // Llamada a la función dentro del espacio de nombres
    MiEspacio::mostrarMensaje();
    return 0;
}
El uso de espacios de nombres ayuda a:

Evitar colisiones de nombres cuando diferentes partes de un programa (o bibliotecas) tienen funciones o variables con el mismo nombre.
Organizar el código de manera más estructurada.
En el ejemplo anterior, MiEspacio:: califica la función mostrarMensaje para indicar que pertenece al espacio de nombres MiEspacio.
#FUENTECHATGPT

En programación orientada a objetos en C++, ¿qué es una clase?
a) Una agrupación de funciones.
b) Un tipo de variable.
c) Un tipo de dato primitivo.
d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

SOLUCIÓN:
d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

Explicación:
En programación orientada a objetos (POO) en C++, una clase es una plantilla o modelo que define las características y comportamientos comunes que tendrán los objetos creados a partir de ella.

Características de una clase:
Estado: Se define mediante los miembros de datos o atributos (variables de la clase).
Comportamiento: Se define mediante los miembros de la función o métodos (funciones de la clase).
Es la base para crear objetos, que son instancias concretas de la clase.
Por ejemplo:
class Coche {
private:
    string marca;  // Miembro de datos (atributo)
    int velocidad; // Miembro de datos (atributo)

public:
    void setMarca(string m) { // Método para establecer la marca
        marca = m;
    }

    void acelerar(int v) { // Método para aumentar la velocidad
        velocidad += v;
    }

    void mostrarCoche() { // Método para mostrar el estado
        cout << "Marca: " << marca << ", Velocidad: " << velocidad << endl;
    }
};
En este ejemplo:

La clase Coche define los atributos (marca, velocidad) y métodos (setMarca, acelerar, mostrarCoche) que un objeto de tipo Coche tendrá.
Los objetos creados a partir de esta clase compartirán esta estructura, pero podrán tener diferentes valores para sus atributos.
En resumen, una clase es el concepto clave de la POO que define cómo será el estado y comportamiento de sus objetos.
#FUENTECHATGPT

¿Qué son los templates en C++?
a) Un tipo especial de clase.
b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.
c) Una forma de definir variables.
d) Una característica específica de C.

SOLUCIÓN:
b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.

Explicación:
Los templates en C++ son una característica poderosa que permite escribir funciones y clases genéricas que funcionan con cualquier tipo de dato sin necesidad de duplicar el código para cada tipo.

Ventajas de los templates:
Reutilización de código: El mismo código puede manejar diferentes tipos de datos.
Flexibilidad: Las funciones y clases se pueden parametrizar según el tipo.
Eficiencia: Se generan implementaciones específicas del código para los tipos utilizados, en tiempo de compilación.
Ejemplo de template para una función:
#include <iostream>
using namespace std;

// Template para una función genérica
template <typename T>
T obtenerMayor(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Mayor entre 5 y 10: " << obtenerMayor(5, 10) << endl;          // Enteros
    cout << "Mayor entre 5.5 y 2.3: " << obtenerMayor(5.5, 2.3) << endl;  // Flotantes
    cout << "Mayor entre 'a' y 'z': " << obtenerMayor('a', 'z') << endl;  // Caracteres
    return 0;
}
En este ejemplo, la función obtenerMayor puede operar con cualquier tipo de dato (int, float, char, etc.) gracias al uso del template.
Ejemplo de template para una clase:
#include <iostream>
using namespace std;

// Template para una clase genérica
template <typename T>
class Caja {
private:
    T contenido;

public:
    void setContenido(T c) {
        contenido = c;
    }

    T getContenido() {
        return contenido;
    }
};

int main() {
    Caja<int> cajaEntero;       // Caja para enteros
    cajaEntero.setContenido(42);
    cout << "Contenido de cajaEntero: " << cajaEntero.getContenido() << endl;

    Caja<string> cajaTexto;     // Caja para cadenas
    cajaTexto.setContenido("Hola");
    cout << "Contenido de cajaTexto: " << cajaTexto.getContenido() << endl;

    return 0;
}
#FUENTECHATGPT
Parte 2: Pregunta de desarrollo de código (80%)


En el marco de la globalización y la creciente tendencia de intercambio académico, las universidades internacionales están experimentando un auge en la diversidad de su población estudiantil. Estos estudiantes provienen de diferentes partes del mundo, con culturas, idiomas y antecedentes educativos distintos. Con tal diversidad, la administración académica enfrenta el desafío de gestionar de manera eficiente y personalizada la información de cada estudiante.

El "Centro Global de Estudios Avanzados" (CGEA) es una de esas universidades internacionales que ha decidido abordar este desafío. Con campus en cinco continentes y una comunidad estudiantil de más de 40,000 alumnos, el CGEA ha identificado la necesidad de modernizar su sistema de gestión académica para ofrecer un mejor servicio a sus estudiantes y, al mismo tiempo, optimizar sus procesos internos.

Para ello, han contratado a una firma de desarrollo de software especializada en soluciones educativas. La primera fase del proyecto consiste en evaluar y decidir qué lenguaje de programación es el más adecuado para implementar el nuevo sistema. Dado que el equipo de desarrollo tiene experiencia tanto en C como en C++, han decidido realizar una comparativa entre ambos lenguajes utilizando una estructura básica: la información del estudiante.

Instrucciones para la Pregunta de Desarrollo de Código:



Rúbrica

(30%) Implementación de la estructura Estudiante:

La estructura Estudiante está correctamente implementada tanto en C como en C++.
(20%) Implementación de la función mostrarEstudiante():

La función mostrarEstudiante() está correctamente implementada y muestra correctamente todos los campos de una instancia de Estudiante.
(30%) Comparación entre las dos implementaciones:

Se proporciona una comparación clara y correcta entre las implementaciones de C y C++.
(20%) Calidad del código:

Todo el código está bien comentado, bien organizado, sigue buenas prácticas de programación y se compila sin errores ni advertencias en CLion.
Importante:

Todos los códigos deben ser originales. Se utilizarán herramientas de detección de plagio para verificar la originalidad del código.
El código debe estar bien documentado y organizado.
Se debe incluir un archivo README con instrucciones sobre cómo compilar y ejecutar el programa.
El código debe compilarse sin errores ni advertencias en CLion.
Estructura del Estudiante:

C++:

Implementa una estructura llamada Estudiante con los campos: nombre, edad, y promedio.
Desarrolla la función mostrarEstudiante() que muestre todos los campos de la estructura.
C:

Realiza una implementación equivalente en el lenguaje C.
Comparativa:

Discute las diferencias clave entre las dos implementaciones.
Gestión de Materias:

Dado que cada estudiante tiene un conjunto de materias, expande tu implementación para incluir la gestión de las mismas.

C++:

Añade a la estructura Estudiante una lista o vector de materias en las que está inscrito.
Implementa funciones para agregar, eliminar y mostrar estas materias.
C:

Realiza una implementación equivalente en el lenguaje C.
Registro de Asistencia:

Es vital para la universidad llevar un control de la asistencia de sus estudiantes.

C++:

Diseña una clase o estructura Asistencia que contenga: fecha, materia y estado (asistió, falta, tardanza).
Integra esta estructura con Estudiante y desarrolla funciones para registrar y mostrar la asistencia.
C:

Realiza una implementación equivalente en el lenguaje C.
Manejo de Excepciones:

El sistema debe ser capaz de manejar situaciones inesperadas, como errores en el formato de la fecha, materias no registradas, etc.

C++:

Implementa excepciones personalizadas para manejar estos escenarios.
Demuestra su uso con bloques try, catch.
C:

Aunque C no tiene un sistema integrado de manejo de excepciones como C++, discute cómo podrías manejar errores y situaciones inesperadas en este lenguaje.
Conclusión:

Con base en tu experiencia y las implementaciones desarrolladas:

¿Cuál de los dos lenguajes consideras más adecuado para el proyecto del CGEA?
¿Qué recomendaciones harías al equipo de desarrollo del CGEA para la siguiente fase del proyecto?
