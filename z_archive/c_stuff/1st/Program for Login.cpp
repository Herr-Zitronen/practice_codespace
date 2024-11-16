#include <iostream>
#include<string>

namespace foo{
    std::string username{};
    std::string pass{};

}


void Register(){
    
    std::cout << "Enter your Username:";
    std::getline(std::cin>> std::ws, foo::username); // needed cuz there is a std::cin before.
    std::cout << '\n';
    std::cout << "Enter your Password: ";
    std::cin >> foo::pass;
    }


int main(){
    std::cout << "***** Program for Login and access to some text *****\n";
    // Login void
    // Valid if the username has no spaces. Busqueda en string
    // Reconocer el string y estudiar si es identico a alguno guardado: Busqueda en string.
    // guardar todo en vectores y matrices.
    int x{};
    std::cin >> x;
    // int i= 0;
    for (int i{0}; i<= x; i++){
        Register();

            
    
    }
        
    //     std::cout << pos << " ;;;; " << std::string::npos << "\n";

    //     if (pos != std::string::npos)  { // pos y npos son {none}, si no encuentra pero si encuentra en la posicion 0, es {none} es igual a not find.
    //         std::cout << "FINDDD\n";
    //         std::cout << pos << " ;;;; " << std::string::npos<<"\n";

    //     } else {
    //         std::cout << "not find\n";
    //         std::cout << pos << " ;;;; " << std::string::npos <<"\n";

    //     }
    // }
    
    // FUNCTION FOR SEARCH A STRING AND ITS POSITION;
    // size_t pos = foo::username.find("jo");
    // if (pos != std::string::npos)
    // {
    //     std::cout << "Find at position " << pos << std::endl;
    // 


    std::cout << "The user is: " << foo::username << "\n";
    std::cout << "The password is: " << foo::pass << "\n";   
    
}