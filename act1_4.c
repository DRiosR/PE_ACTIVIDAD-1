  //RiosRodriguezDaniel 372800
//22-Ago-23
// Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al usuario cual es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER”
//R.R.D_act1_4_932
#include <stdio.h>
int main()
{
    int gen;
    printf("ES HOMBRE O MUJER?\n");
    printf("HOMBRE =1\n");
    printf("MUJER  =2\n");

    scanf("%d",&gen);
    if(gen==1)
    {
        printf("HOLA, ERES HOMBRE");
    }
   else
   {
    printf(" HOLA, ERES MUJER");
   }
    

    
}