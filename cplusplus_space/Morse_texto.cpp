#include <iostream>
#include <map>
#include <sstream>

// Mapeo del Morse a Alfabeto latino

std::map<std::string, char> morseToChar = {
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
    {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
    {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
    {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
    {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
    {"--..", 'Z'}, {"-----", '0'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'},
    {"....-", '4'}, {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'},
    {"----.", '9'}, {"/", ' '}, {".-.-.-", '.'}, {"--..--", ','}  
    // '/' para representar espacios entre palabras
};

std::string morseToText(const std::string& morseCode) {
    std::stringstream ss(morseCode);
    std::string token;
    std::string result;

    while (ss >> token) {
        if (morseToChar.find(token) != morseToChar.end()) {
            result += morseToChar[token];
        } else {
            result += '?';  // Caracter desconocido
        }
    }
    
    return result;
}

int main() {
    std::string morseCode;
    
    // Solicitar entrada al usuario
    std::cout << "Introduce el código Morse (usa '/' para separar palabras): ";
    std::getline(std::cin, morseCode);
    
    // Convertir código Morse a texto
    std::string text = morseToText(morseCode);
    
    // Mostrar resultado
    std::cout << "Texto: " << text << std::endl;
    
    return 0; // 🤠
}
