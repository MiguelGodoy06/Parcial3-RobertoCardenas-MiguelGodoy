#include "estudiante.h"
#include <iostream>
#include <algorithm>

FechaInvalidaException::FechaInvalidaException(const std::string& mensaje) : std::runtime_error(mensaje) {}
MateriaNoRegistradaException::MateriaNoRegistradaException(const std::string& mensaje) : std::runtime_error(mensaje) {}

void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
    std::cout << "Materias: ";
    for (const auto& materia : estudiante.materias) {
        std::cout << materia << " ";
    }
    std::cout << std::endl;
}

void mostrarMaterias(const Estudiante& estudiante) {
    std::cout << "Número de materias: " << estudiante.materias.size() << std::endl;
    std::cout << "Materias: ";
    for (const auto& materia : estudiante.materias) {
        std::cout << materia << " ";
    }
    std::cout << std::endl;
}

void registrarAsistencia(Estudiante& estudiante, const Asistencia& asistencia) {
    estudiante.asistencias.push_back(asistencia);
}

void mostrarAsistencias(const Estudiante& estudiante) {
    std::cout << "Asistencias de " << estudiante.nombre << ":" << std::endl;
    for (const auto& asistencia : estudiante.asistencias) {
        std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: " << asistencia.estado << std::endl;
    }
}

Estudiante crearEstudiante() {
    Estudiante estudiante;
    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, estudiante.nombre);
    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudiante.edad;
    std::cout << "Ingrese el promedio del estudiante: ";
    std::cin >> estudiante.promedio;
    std::cin.ignore(); // Limpiar el buffer de entrada

    std::string materia;
    std::cout << "Ingrese las materias (escriba 'fin' para terminar):" << std::endl;
    while (true) {
        std::cout << "Materia: ";
        std::getline(std::cin, materia);
        if (materia == "fin") break;
        estudiante.materias.push_back(materia);
    }

    mostrarMaterias(estudiante);

    return estudiante;
}

bool validarFecha(const std::string& fecha) {
    // Validación simple de formato de fecha YYYY-MM-DD
    if (fecha.size() != 10 || fecha[4] != '-' || fecha[7] != '-') {
        return false;
    }
    return true;
}

void registrarAsistencias(Estudiante& estudiante) {
    std::string fecha, estado;
    std::cout << "Ingrese la fecha de asistencia (YYYY-MM-DD): ";
    std::getline(std::cin, fecha);

    if (!validarFecha(fecha)) {
        throw FechaInvalidaException("Formato de fecha inválido. Debe ser YYYY-MM-DD.");
    }

    for (const auto& materia : estudiante.materias) {
        std::cout << "Ingrese el estado de asistencia para " << materia << " (asistió, falta, tardanza): ";
        std::getline(std::cin, estado);
        Asistencia asistencia = {fecha, materia, estado};
        registrarAsistencia(estudiante, asistencia);
    }
}