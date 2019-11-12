//
// Created by utec on 12/11/19.
//

#ifndef HERENCIA_ALUMNO_H
#define HERENCIA_ALUMNO_H

#include <iostream>
#include <string>
#include "persona.h"

using namespace std;
class Alumno : Persona {
private:
    string carrera;
    int credAcum;
public:
    Alumno() {
        this->carrera="";
        this->credAcum=0;
    }
    Alumno(int codigo, const string &nombre, int dni, const string &carrera, int credAcum)
    : Persona(codigo,nombre,dni){
        this->carrera=carrera;
        this->credAcum=credAcum;

    }
    const string &getCarrera() const {
        return carrera;
    }

    void setCarrera(const string &carrera) {
        Alumno::carrera = carrera;
    }

    int getCredAcum() const {
        return credAcum;
    }

    void setCredAcum(int credAcum) {
        Alumno::credAcum = credAcum;
    }
    string imprimir() {
        return to_string(getCodigo()) + " " +
        getNombre()+ " " + to_string(getDni()) + " " +
        carrera+ " " + to_string(credAcum);
    }

};
#endif //HERENCIA_ALUMNO_H
