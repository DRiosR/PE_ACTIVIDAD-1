//RiosRodriguezDaniel 372800
//22-Ago-23
// Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente
//R.R.D_act1_9_932
#include <stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("Ingrese los numeros\n ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if (num1>num2) 
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    if (num2>num3) 
    {
        int temp=num2;
        num2=num3;
        num3=temp;
    }
    if (num1>num2) 
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    printf("¡Listo! Los números ordenados de menor a mayor son: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
