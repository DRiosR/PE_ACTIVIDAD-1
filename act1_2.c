//RiosRodriguezDaniel 372800
//22-Ago-23
//Algoritmo que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
//R.R.D_act1_2_932
#include <stdio.h>
int main()
{
    float div;
    int num;
    printf("Pon un numero \n");
    scanf("%d",&num);
    div=num %2; 
    if(div!=0)
    {
    printf("es impar");
    }
    else
    {
    printf ("es par");
    }

return 0;
}