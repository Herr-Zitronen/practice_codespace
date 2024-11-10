#include <iostream>
#include <chrono>
#include <thread>

// Functions

unsigned long long int sumatoria_base(unsigned long long int  base, int veces){
    unsigned long long int  resultado{0};
    for (size_t i = 1; i <= veces ; ++i ){ // limit-1 cuz base != 0
        resultado += base;
        
    }
    return resultado;
}

void autoprocess(unsigned long long int  base, int power, unsigned long long int csum){
    std::cout << "---------------\n";
    unsigned long long int temp{base};

    std::cout << "iteración grado 1: " << base << std::endl;


    for (size_t i = 2; i <= power; ++i){ //for n potencia: csum0+ (base + base)
        csum = sumatoria_base(temp, base); //acomulación
        
        temp = csum;


        // print for debug
        std::cout << csum << '\t' << base << std::endl;


    }
    std::cout << "the final is: " << csum;
}

void stepprocess(unsigned long long int  base, int power, unsigned long long int csum){
    std::cout << " ----------------\n";
    unsigned long long int temp{base};
    
    std::cout << "iteración grado 1: " << base << std::endl;

    for (size_t i = 2; i <= power; ++i){ //for n potencia: csum0+ (base + base)

        csum = sumatoria_base(temp, base); //acomulación
        temp = csum;
        // print for debug

        std::cout << "Valor: " << csum << '\t'<< '\t' << "Base: " << base << '\t' << "Iteración: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));

    }
    std::cout << "the final is: " << csum;
}


// MAIN
int main(){
    std::cout << "***** Programa: Demostración matemática de las potencias mediante adición\n";

    int base {};
    int power {};
    std::cout << "Valor de base: ";
    std::cin >> base;
    std::cout << "Valor de potencia: ";
    std::cin >> power;


    // result = 16

    unsigned long long int csum{0};
    char inp{};
    std::cout << "";
    std::cout << "Desea el proceso (y) o sólo el resultado (n)?:";
    std::cin >> inp;

    switch (inp)
    {
    case 'y':
        stepprocess(base, power, csum);
        break;
    case 'n':
        autoprocess(base, power, csum);
        break;
    
    default:
        std::cout << "Invalid";
        break;
    }

}