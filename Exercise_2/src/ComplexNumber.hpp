#ifndef Complexnumber_H
#define Complexnumber_H
#include <iostream>
// dichiaro e definisco la classe dei numeri complessi
class ComplexNumber {
public:
    double parteReale;
    double parteImmaginaria;
    ComplexNumber() = default;
    // dichiaro e definisco un costruttore user defined per costruire un numero complesso a partire da parte reale e immaginaria
    ComplexNumber(double a, double b){
        parteReale=a;
        parteImmaginaria=b;
    }
    /* dichiaro e definisco metodo che modifica direttamente il numero nel suo coniugato
    void coniugato(){
        parteImmaginaria = - parteImmaginaria;
    }*/
    // dichiaro e definisco metodo che ritorna il coniugato del numero
    ComplexNumber coniugato() {
        ComplexNumber c(parteReale,-parteImmaginaria);
        return c;
    }
};
// dichiaro gli operatori richiesti
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);
std::ostream& operator<<(std::ostream& os, const ComplexNumber& c);
#endif
