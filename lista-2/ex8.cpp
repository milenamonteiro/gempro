#include <iostream>

int main()
{
    int num = (rand() % 1000) + 1;
    std::cout << "Tente adivinhar o número secreto!\n";
    int input;
    do {
        std::cin >> input;
        if (input > num) std::cout << "Muito alto, tente de novo!\n";
        else if (input < num) std::cout << "Muito baixo, tente de novo!\n"; 
    } while (input != num);
    std::cout << "Você acertou! O número era " << num;
    return 0;
}
