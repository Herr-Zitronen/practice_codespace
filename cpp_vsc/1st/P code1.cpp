    // #include <iostream>
    // #include <limits> // Para std::numeric_limits

    // int main() {
    //     int number;

    //     while (true) {
    //         std::cout << "Por favor, ingrese un número entero: ";
    //         std::cin >> number;

    //         // Verificamos si la entrada fue exitosa
    //         if (std::cin.fail()) {
    //             std::cin.clear(); // Limpiar el estado de error
    //             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar la entrada incorrecta
    //             std::cout << "Entrada inválida. Intente de nuevo." << std::endl;
    //         } else {
    //             // Si la entrada fue correcta, salimos del bucle
    //             break;
    //         }
    //     }

    //     std::cout << "Número ingresado: " << number << std::endl;
    //     return 0;
    // }

#include <iostream>
#include <string>
#include <cstdlib> // Para std::atoi

bool esEntero(const std::string& str) {
    // Verifica si la cadena representa un número entero
    if (str.empty() || (str[0] != '-' && !isdigit(str[0]))) {
        return false;
    }
    for (size_t i = 1; i < str.size(); ++i) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    int number;

    while (true) {
        std::cout << "Por favor, ingrese un número entero: ";
        std::getline(std::cin, input); // Leer la entrada como string

        // Validar si la entrada es un entero
        if (esEntero(input)) {
            number = std::atoi(input.c_str()); // Convertir a int
            break; // Salir del bucle si la entrada es válida
        } else {
            std::cout << "Entrada inválida. Intente de nuevo." << std::endl;
        }
        std::cout << "HOO:\n";
    }

    std::cout << "Número ingresado: " << number << std::endl;
}
