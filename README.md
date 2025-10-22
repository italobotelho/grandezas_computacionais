# Conversor de Bases Numéricas em C

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Plataforma](https://img.shields.io/badge/Plataforma-Windows-blue.svg)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow.svg)

## 📖 Descrição

Este é um projeto simples criado para fins de aprendizagem. Ele consiste em um conversor de bases numéricas (Decimal, Binário e Hexadecimal) desenvolvido na linguagem C.

O código é uma aplicação de console que explora a lógica de conversão entre as bases, o uso de funções e a manipulação de entrada/saída (`printf`/`scanf`).

## ✨ Funcionalidades

-   [X] Menu interativo para seleção da base de origem.
-   [X] Conversão de **Decimal** para **Binário**.
-   [X] Conversão de **Decimal** para **Hexadecimal**.
-   [X] Conversão de **Binário** (inserido como `long long`) para **Decimal**.

## 🛠️ Tecnologias Utilizadas

* **Linguagem C**
* **Bibliotecas Padrão:**
    * `<stdio.h>` - Para entrada e saída padrão.
    * `<math.h>` - Para cálculos de potência (`pow`).
    * `<stdlib.h>` - Para comandos do sistema (`system`).
* **Compilador:** GCC (via MinGW no Windows)
* **Ambiente:** Console Windows

## 🚀 Como Usar

### Pré-requisitos

* Um compilador C (como o [MinGW-w64](https://www.mingw-w64.org/)) instalado e configurado no PATH do sistema.
* Um terminal (como o Prompt de Comando, PowerShell ou o terminal integrado do VS Code).

### Compilação

1.  Abra o terminal na pasta onde o arquivo `main.c` está localizado.
2.  Execute o seguinte comando para compilar o programa:

    ```bash
    gcc main.c -o conversor.exe -lm
    ```

    > **Nota:** O argumento `-lm` é essencial para "linkar" a biblioteca de matemática (`math.h`) e permitir o uso da função `pow()`.

### Execução

1.  Após a compilação, um arquivo `conversor.exe` será criado.
2.  Execute-o diretamente no terminal:

    ```bash
    ./conversor.exe
    ```

3.  Siga as instruções do menu para realizar as conversões.

## 🚧 Funcionalidades a Implementar (To-Do)

Este projeto ainda está em desenvolvimento. As próximas etapas incluem:

-   [ ] Implementar a função `hex_to_decimal(char* num)`
-   [ ] Implementar a função `bin_to_hex(long long num)`
-   [ ] Implementar a função `hex_to_bin(char* num)`
-   [ ] **Melhoria:** Alterar a entrada de dados de Binário e Hexadecimal para `char[]` (string) em vez de `long long` ou `int`, para permitir números muito maiores e evitar estouro de inteiro (`integer overflow`).
-   [ ] **Melhoria:** Criar um loop principal no `main` para que o menu reapareça após uma conversão, em vez de encerrar o programa.

## 👨‍💻 Autor

Criado por **[Ítalo Botelho]** como parte de um projeto de aprendizado em Linguagem C.
