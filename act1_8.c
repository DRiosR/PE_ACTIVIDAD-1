//RiosRodriguezDaniel 372800
//22-Ago-23
// Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
//R.R.D_act1_8_932
#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);
    printf("Ingresa el tercer número: ");
    scanf("%d", &num3);
    int medio;
    if (num1<num2) 
    {
        if (num2<num3) 
        {
            medio = num2;
        } 
        else if (num1<num3) 
        {
            medio=num3;
        } 
        else 
        {
            medio=num1;
        }
    } 
    else 
    {
        if (num1<num3) 
        {
            medio=num1;
        } 
        else if (num2<num3) 
        {
            medio=num3;
        } 
        else 
        {
            medio=num2;
        }
    }
    printf("El número del medio es: %d\n", medio);

    return 0;
}
