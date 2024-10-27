#include <iostream>
#include <string>

int main()
{
    std::string firstn{};
    std::string lastn{};
    char cases;
    std::cout << "Select the program (1-n)";
    std::cin >> cases;
    if (cases == '0'){
        std::cout << "invalid" << '\n';
    }
    else
    {
        int a;
        std::cout << "enter how many times execute the program: " << '\n';
        std::cin >> a;  

        switch (cases){
            case '0':
                std::cout << " No validdddd" << '\n';
                break;
            case '1':
                int age;
                for (size_t i = 0; i < a; i++)
                {
                std::cout << "enter your age" << '\n';
                std::cin >> age;

                if (age>=70)
                {
                    std::cout << "you are very old"<<'\n';
                }
                else if(age >= 18)
                {
                    std::cout << "you're old"<<'\n';
                }
                else if (age<0)
                {
                    std::cout << "you were not born yet" << '\n';
                }
                else if (age == 0)
                {
                    std::cout << "invalid.";
                }
                else
                    std::cout << "you're young :)" << '\n';
                }
                break;
            case '2':
            //Program convert a periodic number into a fraction
            std::cout << "this is the second program\n";
            std::cout << "Enter your first and last name\n";
            // no es posible declarar variables en un switch

            std::cin >> firstn >> lastn;

            std::cout << "Hello " << firstn << " " << lastn << '\n';

            break;
            default:
                std::cout << "There's no program";
                break;
        } 

    
    }
   
}