#include <iostream>
#include <cmath>

int main(){
    float a;
    float b;
    float c;

    std::cout << "Calculadora de hipotenusa" << '\n';

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "O valor da hipotenusa é: " << c << '\n';

    return 0;
}
// COmentsario
