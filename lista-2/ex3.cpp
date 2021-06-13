#include <iostream>

int main()
{
    int num;
    std::cout << "Digite um número para ser calculado o fatorial: ";
    std::cin >> num;

    int fatorial = 1;
    for (int i = 1; i <= num; i++)
    {
        fatorial *= i;
    }
    std::cout << num << "! = " << fatorial;
    return 0;
}