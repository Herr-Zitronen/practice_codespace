#include<iostream>

int main(){
    
    std::string a;
    std::string b{};
    std::string c{"hi"};

    if (c.empty()){
        std::cout << "empty";
    }
}