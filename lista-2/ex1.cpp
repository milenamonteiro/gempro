#include <iostream>

int main()
{
    int num = 0;
    for (int i = 1; i <= 10; i++)
        num += i;
    std::cout << "Soma dos números inteiros de 1 a 10: " << num;
    return 0;
}
