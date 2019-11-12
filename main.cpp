#include <iostream>
#include "persona.h"
#include "Alumno.h"

int main() {
    Persona p1(1000, "Fernando",73039858);
    cout<<p1.imprimir()<<endl;

    Alumno a1(2000,"Piero",73039164,"Ing.Ambiental",25);
    cout<<a1.imprimir()<<endl;
}