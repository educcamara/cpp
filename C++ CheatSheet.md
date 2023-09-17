# C++ Cheat Sheet

## Sumário

- [Sumário](#sumário)
- [Comandos Gerais](#comandos-gerais)
  - [Operadores Aritméticos](#operadores-aritméticos)
- [Datatypes (Dados Básicos)](#datatypes-dados-básicos)
- [Namespace](#namespace)
- [Typedefs/Using](#typedefsusing)
- [Type Conversion (Conversão de Tipos)](#type-conversion-conversão-de-tipos)
- [Input](#input)
- [Sentenças If](#sentenças-if)

## Comandos Gerais

- ``` //Comentários ```
- ``` /*Comentário Multi-linha*/ ```
- ```const``` : Variável constante
  impedindo que o valor seja alterado

  ```c++
  int main() {
      const int PI = 3.1415; 
      // Convenção letra maiúscula
      PI = 6; // Erro
      std::cout << PI << std::endl;
      return 0;
  }
  ```

### Operadores Aritméticos

- ```+``` : Soma
- ```-``` : Subtração
- ```*``` : Multiplicação
- ```/``` : Divisão
- ```%``` : Módulo (Resto da Divisão)
- ```++``` : Incremento (+= 1)
- ```--``` : Decremento (-= 1)
- **Expressões Matemáticas seguem a ordem de prioridade padrão**

```c++
...
int a = 5;
a \= 2;
// Como é inteiro, retorna 2 (Valor decimal Truncado)
...
```

- ```std::max(a, b)``` : Retorna o maior valor entre a e b
- ```std::min(a, b)``` : Retorna o menor valor entre a e b
- ```#include <cmath>```:
  - ```pow(a, b)``` : Retorna a elevado a b
  - ```sqrt(a)``` : Retorna a raiz quadrada de a
  - ```abs(a)``` : Retorna o valor absoluto de a
  - ```round(a)``` : Retorna o valor arredondado de a
  - ```ceil(a)``` : Retorna o valor arredondado para cima de a
  - ```floor(a)``` : Retorna o valor arredondado para baixo de a

## Datatypes (Dados Básicos)

- Define o tipo de um valor
- Declara variáveis, parâmetros e funções
- Declara o Datatype apenas uma vez
- **Inteiro** (Números Inteiros):
  - 4 bytes
  - ```int a = 5;```  Retorna 5
  - ```int a = 7.5;``` Retorna 7

```c++
int main() {
    int a = 5;
    std::cout << a << std::endl;
    return 0;
}

// Saída: 5
```

- **Double & Float** (Números Decimais):
  - 8 bytes double
  - 4 bytes float
  - ```double a = 5;```  Retorna 5.0
  - ```double a = 7.5;``` Retorna 7.5

```c++
int main() {
    double a = 5.32;
    std::cout << a << std::endl;
    return 0;
}

// Saída: 5.32
```

- **Char** (Caracteres):
  - 1 byte
  - ```char a = 'a';```  Retorna a
  - ```char a = '5';``` Retorna 5
  - ```char a = 'BC';``` Alerta: overflow
  Retorna 'C'

- **String** (Cadeia de Caracteres):
  - 1 byte por caractere
  - ```std::string a = "abc";```  Retorna abc
  - ```std::string a = "5";``` Retorna 5
  - ```std::string a = "BC";``` Retorna BC

```c++
int main() {
    std::string a = "Cadu";
    std::cout << "Hello " << a << std::endl;
    return 0;
}

// Saída: Hello Cadu
```

- **Boolean** (Verdadeiro ou Falso):
  - 1 byte
  - ```bool a = true;```  Retorna 1
  - ```bool a = false;``` Retorna 0

## Namespace

- Espaços de comando que contém funções e variáveis
- Permitem redeclarar variáveis com o mesmo nome, se estiverem em namespaces diferentes

```c++
#include <iostream>

namespace num1 {
    int a = 5;
}
int main() {
    int a = 10;
    std::cout << num1::a << std::endl;
    return 0;
}
// Saída: 5
```

- É comum de se usar ```using namespace std;``` para não precisar escrever ```std::```
- No entanto, pode causar conflito de nomes
- Melhor forma de usar:
  
```c++
#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Resto do código
```

## Typedefs/Using

- Cria um "apelido" para um tipo de dado
- Pode ser usado para simplificar nomes de tipos de dados complexos
- Ultimamente se usa ```using``` ao invés de ```typedef```

```c++
#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// Convenção terminar com "_t"
// Exemplo de Vetor que armazena Pares de (string, int)
using text_t = std::string;

int main() {

    pairlist_t pairlist;
    text_t text = "Hello World";

    return 0;
}

```

## Type Conversion (Conversão de Tipos)

- **Implicita**: O compilador faz a conversão automaticamente
- **Explicita**: O programador faz a conversão manualmente

```c++
...
    // Conversão Implicita
    int a = 2.71;
    // a = 2
    char b = 100; // Número na Tabela ASCII
    // b = 'd'

    // Conversão Explicita
    std::cout << (char) 100;
    // Saída: d
    int corretas = 8;
    int total = 10;
    double porcentagem =  corretas / (double)total * 100;
    // Se fosse divisão de inteiros, retornaria 0
    std::cout << porcentagem << std::endl;
    // Saída: 80

```

## Input

- ```std::cin``` : Lê um valor do teclado
- Para de ler quando encontra um espaço ou uma quebra de linha

```c++
...
    std::string name;
    std::cin >> name;
    // Exemplo de entrada: Cadu
    std::cout << "Hello" << name << std::endl;
    
    std::cin >> full_name;
    // Exemplo de entrada: Cadu Carlos Caduw
    std::cout << "Hello" << full_name << std::endl;
    // Saída: Hello Cadu

    // Saída: Cadu
...
```

- ```std::getline``` : Lê uma linha inteira do teclado
- Para de ler quando encontra uma quebra de linha

```c++
...
    int age;
    std::cin >> age;
    // Exemplo de entrada: 20
    std::getline(std::cin >> std::ws, name);
    // Exemplo de entrada: Cadu Carlos Caduw
    // std::ws: Ignora espaços em branco no início da linha

    std::cout << "Hello" << fullname << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    // Saída: Hello Cadu Carlos Caduw
    //        You are 20 years old
```

## Sentenças If

- ```if``` : Executa um bloco de código se uma condição for verdadeira
- ```else if``` : Executa um bloco de código se uma condição for verdadeira e a condição anterior for falsa
- ```else``` : Executa um bloco de código se a condição de if for falsa

```c++
...
    int age = 18;
    
    if (age >= 18) {
        std::cout << "You are an adult" << std::endl;
    } 
    else if (age < 0){
        std::cout << "You are not born yet" << std::endl;
    } 
    else {
        std::cout << "You are not an adult" << std::endl;
    }
    // Saída: You are an adult
...
```

## Switch

- Utilizado para evitar vários ```else if```
- Mais eficiente e mais legível

```c++
...
    int month;
    ...
    switch (month) {
        case 1:
            std::cout << "January" << std::endl;
            break;
        case 2:
            std::cout << "February" << std::endl;
            break;
        ...
        case default:
            std::cout << "Invalid Month" << std::endl;
            break;
    }

```
