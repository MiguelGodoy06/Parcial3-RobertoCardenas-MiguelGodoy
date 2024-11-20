#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <vector>
#include <stdexcept>

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado; // "asistió", "falta", "tardanza"
};

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<Asistencia> asistencias;
};

class FechaInvalidaException : public std::runtime_error {
public:
    FechaInvalidaException(const std::string& mensaje);
};

class MateriaNoRegistradaException : public std::runtime_error {
public:
    MateriaNoRegistradaException(const std::string& mensaje);
};

void mostrarEstudiante(const Estudiante& estudiante);
void mostrarMaterias(const Estudiante& estudiante);
void registrarAsistencia(Estudiante& estudiante, const Asistencia& asistencia);
void mostrarAsistencias(const Estudiante& estudiante);
Estudiante crearEstudiante();
bool validarFecha(const std::string& fecha);
void registrarAsistencias(Estudiante& estudiante);

#endif // ESTUDIANTE_H