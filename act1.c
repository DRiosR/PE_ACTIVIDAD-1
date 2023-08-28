//RiosRodriguezDaniel 372800
//22-Ago-23
//Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio acompañado de la leyenda APROBADO o REPROBADO
//R.R.D_act1_1_932
#include <stdio.h>
int main()
{
    float cali1,cali2,cali3,cali4,prom;
    printf("ingrese las calif\n");
    scanf("%f",&cali1);
    scanf("%f",&cali2);
    scanf("%f",&cali3);
    scanf("%f",&cali4);
   
    prom=(cali1+cali2+cali3+cali4)/4;
    
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
return 0;
}
    