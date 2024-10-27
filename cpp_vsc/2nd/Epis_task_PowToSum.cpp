#include <iostream>
#include <chrono>
#include <thread>

// Functions

int sumatoria_base(int base, int veces){
    int resultado{0};
    for (size_t i = 1; i <= veces ; ++i ){ // limit-1 cuz base != 0
        resultado += base;
        
    }
    return resultado;
}

void autoprocess(int base, int power, int csum){
    std::cout << "Final the la iteración\n";
    int temp{base};
    std::cout << "iteración grado 1: " << base << std::endl;
    for (size_t i = 2; i <= power; ++i){ //for n potencia: csum0+ (base + base)
        csum = sumatoria_base(temp, base); //acomulación
        temp = csum;

        // print for debug
        std::cout << csum << '\t' << base << std::endl;


    }
    std::cout << "the final is: " << csum;
}

void stepprocess(int base, int power, int csum){

    for (size_t i = 1; i <= power ; ++i){ //for n potencia: csum0+ (base + base)

        std::cout << "Número de iteración (potencia): " << i << std::endl;

        std::cout << "csum = valor acomulado: " << csum << " más el valor de la base sumada el numero k veces de su valor";
        // add a loop for add the sum times base.
        csum += base + base; //acomulación
        
        std::this_thread::sleep_for(std::chrono::seconds(2));
        
        // print for debug
        std::cout << csum << '\t' << base << std::endl;


    }   
    std::cout << "the final is: " << csum;

}


// MAIN
int main(){
    std::cout << "***** Programa: Demostración matemática de las potencias mediante adición\n";

    int base {2};
    constexpr int power {10};

    // result = 16

    int csum{0};
    char inp{};
    std::cout << "Desea el proceso (y) o sólo el resultado (n)?:  ";
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