#include <iostream>

int main(){
    char op;
    float a;
    float b;

    std::cout << "Calculadora de 2 números" << '\n';

    std::cout << "Digite o operador: ";
    std::cin >> op;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    switch (op) {
        case '+':
            std::cout << "a + b = " << a + b << '\n';
            break;
        case '-':
            std::cout << "a - b = " << a - b << '\n';
            break;
        case '*':
            std::cout << "a * b = " << a * b << '\n';
            break;
        case '/':
            std::cout << "a / b = " << a / b << '\n';
            break;
        default:
            std::cout << "Números ou operador inválidos." << '\n';
            break;
        
    }
        
    return 0;
}
// Comentario
