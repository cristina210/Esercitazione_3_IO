#include <ComplexNumber.hpp>
#include <iostream>
#include <cmath>
// definisco operatore di stampa
std::ostream& operator<<(std::ostream& os, const ComplexNumber& c){
    if (c.parteReale == 0){
        os<<0;
    }
    else if (c.parteImmaginaria<0) {
        os<<c.parteReale<<""<<c.parteImmaginaria<<"i";
    }
    else if (c.parteImmaginaria==0) {
        os<<c.parteReale;
    }
    else {
        os<<c.parteReale<<"+"<<c.parteImmaginaria<<"i";
    }
    return os;
}
// definisco operatore di +
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2){
    double num1 = c1.parteReale + c2.parteReale;
    double num2 = c1.parteImmaginaria + c2.parteImmaginaria;
    ComplexNumber c(num1,num2); //chiamo costruttore user defined
    return c;
}
// definisco operatore di ==
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2){
    double tol = 1.0e-10;
    double diffRe = c1.parteReale-c2.parteReale;
    double diffImm = c1.parteImmaginaria-c2.parteImmaginaria;
    double distanza = sqrt((diffRe*diffRe)+(diffImm*diffImm));  //distanza euclidea
    return distanza < tol;
}
