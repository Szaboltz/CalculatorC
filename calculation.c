#include <stdio.h>
#include <stdlib.h>

void main(){
    float num1, num2, som, div, sub, mul;
    printf("Bem vindo a calculadora em C!\n***************************************************************************\n ");
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    som = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("*************************************************************************** \nO resultado da soma entre %3.3f e %3.3f e: %3.2f \nO resultado da subtracao entre %3.3f, e %3.3f e: %3.2f \nO resultado da multiplicacao entre %3.3f e %3.3f e: %3.2f \nO resultado da divisao entre %3.3f e %3.3f e: %3.2f \n***************************************************************************", num1, num2, som, num1, num2, sub, num1, num2, mul, num1, num2, div);

}