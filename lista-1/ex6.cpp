#include <iostream>

int main()
{
    double a, b, c, me;
    std::cin >> a >> b >> c >> me;
    double ma = (a * 1 + b * 2 + c * 3 + me)/7;

    if (ma >= 9) std::cout << "A";
    else if (ma >= 7.5 && ma < 9.0) std::cout << "B";
    else if (ma >= 6.0 && ma < 7.5) std::cout << "C";
    else std::cout << "D";

    return 0;
}