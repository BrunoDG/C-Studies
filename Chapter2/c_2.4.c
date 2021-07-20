#include <stdio.h>

#define VTAB '\xb'
#define BELL '\x7'
#define MAXLINE 1000
#define LEAP 1
#define YEAR 31 + 28 + LEAP + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31

int i = 0, limit = MAXLINE + 1;

char c, line[1000], esc = '\\';

float eps = 1.0e-5;

void showVal();
void isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a lear year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}

int main(void)
{
    showVal();
    isLeapYear(2000);
    isLeapYear(2006);
    isLeapYear(1900);
    isLeapYear(1945);
    isLeapYear(1995);
    isLeapYear(1998);
    return 0;
}

void showVal()
{
    int lower, upper, step;
    printf("%d %d %d\n", lower, upper, step);
}

// Operadores Aritméticos Binários
//
// x + y -> Operação de Soma >> + -> Operador de Soma
// x - y -> Operação de Subtração >> - -> Operador de Subtração
// x * y -> Operação de Multiplicação >> * -> Operador de Multiplicação
// x / y -> Operação de Divisão >> / -> Operador de Divisão
// x % y -> Operação de Módulo >> % -> Operador de Módulo (Retorna o resto de uma divisão obrigatoriamente inteira)
//

// Operadores Aritméticos de Ordem
//
// x > y -> Comparação de maior que >> > -> Operador de Maior que
// x >= y -> Comparação se maior ou igual >> >= -> Operador de Maior ou Igual a
// x < y -> Comparação de menor que >> < -> Operador de Menor que
// x <= y -> Comparação se menor ou igual >> <= -> Operador de Menor ou Igual a
// x == y -> Comparação de igualdade >> == -> Operador de igualdade
// x != y -> Comparação de diferença >> != -> Operador de diferença
//

// Operadores Lógicos em C
//
// x && y -> x E y (operação AND / União) >> && -> Operador de União
// x || y -> x OU y (Operação OR / Intersecção) >> || -> Operador de Intersecção
//

// Operadores Unários
// ! -> NÃO / NOT
// = -> Recebe - Get
//