#include <iostream>
#include <iomanip>

int main()
{
    double a = 234.345, b = 45.698;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(6) << a << " - " << b << "\n";
    std::cout << std::setprecision(0) << a << " - " << b << "\n";
    std::cout << std::setprecision(1) << a << " - " << b << "\n";
    std::cout << std::setprecision(2) << a << " - " << b << "\n";
    printf("%.1e - %.1e\n", a, b);
    printf("%.1E - %.1E\n", a, b);
    printf("%.g - %.g\n", a, b);

    return 0;
}