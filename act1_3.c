//RiosRodriguezDaniel 372800
//22-Ago-23
// Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio acompañado de la leyenda APROBADO o REPROBADO
//R.R.D_act1_3_932
#include <stdio.h>
int main()
{
    float cali[3],acu,prom;
    int i,num;

    printf("cuantas calificaciones pondras\n");
    scanf("%d",&num);
    printf("ingrese las calif\n");
    for (i=0;i<num;i++)
    {
    scanf("%f",&cali[i]);
    acu=acu+cali[i];
    }
    prom=acu/num;
    if(prom>=60)
    {
    printf("APROBO\n");
    printf("El promedio es %f",prom); 
    }
    else
    {
    printf("REPROBADO\n");
    printf("El promedio es %f",prom);
    }

}
    