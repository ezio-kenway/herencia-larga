//
// Created by utec on 12/11/19.
//

#ifndef HERENCIA_PERSONA_H
#define HERENCIA_PERSONA_H

#include <iostream>
#include <string>
using namespace std;
class Persona{
private:
    int codigo, dni;
    string nombre;
public:
    Persona() {
        this->codigo=0;
        this->nombre="sin nombre";
        this->dni=0;
    }
    Persona(int codigo, string nombre, int dni){
        this->codigo=codigo;
        this->nombre=nombre;
        this->dni=dni;
    }

    const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        Persona::nombre = nombre;
    }

    int getCodigo() const {
        return codigo;
    }
    void setCodigo(int codigo) {
        Persona::codigo=codigo;
    }

    int getDni() const {
        return dni;
    }
    void setDni(int dni) {
        Persona::dni=dni;
    }

    string imprimir() {
        return to_string(codigo) + " " +
            nombre + " " +
            to_string(dni);
    }

};

#endif //HERENCIA_PERSONA_H
