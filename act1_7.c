//RiosRodriguezDaniel 372800
//22-Ago-23
// Algoritmo que lea 3 números y desplegar cuál número es el menor y su valor
//R.R.D_act1_7_932
#include <stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Ingrese 3 numeros\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);

    int menor = num1;
    if (num2 < menor) 
    {
        menor = num2;
    }
    if (num3 < menor) 
    {
        menor = num3;
    }
    printf("El numero menor es: %d\n", menor);

    return 0;
}