#include <iostream>

int main()
{
    int num=0, impar=0, par=0, positivo=0, negativo=0;

    for(int i; i < 5; i++) {
        std::cin >> num;
        if (num < 0) negativo++;
        else positivo++;
        if (num % 2 == 0) par++;
        else impar++;
    }
    
    std::cout << par << " valore(s) par(es)\n"
              << impar << " valore(s) ímpar(es)\n"
              << positivo << " valore(s) positivo(s)\n"
              << negativo << " valore(s) negativo(s)\n";

    return 0;
}
