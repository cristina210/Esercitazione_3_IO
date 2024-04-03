#include <iostream>
#include <ComplexNumber.hpp>
int main()
{   // stampo numeri complessi
    double Re1 = 2;
    double Im1 = -3.51;
    ComplexNumber num1(Re1,Im1);
    double Re2 = 2;
    double Im2 = -3.5;
    ComplexNumber num2(Re2,Im2);
    std::cout<<num1<<std::endl;
    std::cout<<num2<<std::endl;
    // calcolo coniugato e stampo il coniugato
    ComplexNumber coniugato_num1 = num1.coniugato();
    std::cout<<coniugato_num1<<std::endl;
    // calcolo la somma
    ComplexNumber somma = num1+num2;
    std::cout<<somma<<std::endl;
    // controllo se due numeri complessi sono uguali
    if (num1==num2){
        std::cout<<"i numeri sono uguali (a meno di una tolleranza)"<<std::endl;
    }
    else {
        std::cout<<"i numeri sono diversi"<<std::endl;
        }
    return 0;
}
