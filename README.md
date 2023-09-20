# Some C++ Projects

## Calcular Hipotenusa

```c++
#include <iostream>
#include <cmath>

int main(){
    float a;
    float b;
    float c;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "O valor da hipotenusa é: " << c << '\n';

    return 0;
}

```

## Calculadora Simples

- Programa simples de calculadora de 2 números com as 4 operações básicas
- Introdução ao ```switch``` para seleção de operação

**1. Declarar as variáveis:**

```c++
int main() {
    char op; // Operador do cálculo
    float a; // Primeiro número
    float b; // Segundo número
    ...
```

**2. Atribuir valores às variáveis por meio do ```std::cin```:**

```c++
    ...
    std::cout << "Digite o operador: ";
    std::cin >> op;
    // std::cin.get(op); 
    // Outra forma de pegar o operador
    std::cout << "Digite o primeiro número: ";
    std::cin >> a;

    std::cout << "Digite o segundo número: ";
    std::cin >> b;
    ...
```

**3. Utilização do ```switch```:**

```c++
    ...
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
    ...
```
