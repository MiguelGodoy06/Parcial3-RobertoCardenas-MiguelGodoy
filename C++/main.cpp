#include "estudiante.h"
#include <iostream>

int main() {
    try {
        Estudiante estudiante1 = crearEstudiante();
        mostrarEstudiante(estudiante1);

        registrarAsistencias(estudiante1);
        mostrarAsistencias(estudiante1);
    } catch (const FechaInvalidaException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (const MateriaNoRegistradaException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error inesperado: " << e.what() << std::endl;
    }

    return 0;
}