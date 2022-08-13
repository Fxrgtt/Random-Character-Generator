#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

int main() {
    srand(time(NULL));

    std::cout << "Gerador de senhas aleatórias e seguras. \n";
    
    // Armazenamento das letras, simbolos etc... que vão ser gerados
    std::string characters = {
       std::string("1234567890")
       + "abcdefghijkmnopqrstuvwxyz"
       + "ABCDEFGHIJKMNOPQRSTUVWXYZ"
       + "'!@#$%¨&*()_+`}{^][<>:?,.-"
    };

    // Senha que vai ser gerada
    std::string password;

    for (int i = 0; i < 12; i++) {
       password += characters[rand() % (characters.length() - 1)];
    };
    
        std::cout << password;

    return 0;
}