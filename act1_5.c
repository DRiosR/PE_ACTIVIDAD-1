//RiosRodriguezDaniel 372800
//22-Ago-23
//Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar: 
//R.R.D_act1_5_932
#include <stdio.h>
int main()
{
    float cali1,cali2,cali3, prom;
    printf("ingrese las 3 calificaciones\n");
    scanf("%f",&cali1);
    scanf("%f",&cali2);
    scanf("%f",&cali3);
    prom=(cali1+cali2+cali3)/3;
    if(prom<30)
    {
        printf("Repetir\n");
    }
    else if (prom>=30 && prom<60)
    {
        printf("Extraordinario\n");
    }
    else if (prom>=60 && prom<70)
    {
        printf("Sufuciente\n");
    }
    else if (prom>=70 && prom<80)
    {
        printf("Regular\n");
    }
    else if (prom>=80 && prom<90)
    {
        printf("Bien\n");
    }
    else if (prom>=90 && prom<98)
    {
        printf("Muy bien\n");
    }
    else if (prom>=98 && prom<=100)
    {
        printf("Excelente\n");
    }
    else if (prom>100)
    {
        printf("Error");
    }
    printf("El promedio es=%f",prom);
    return 0;
    

}