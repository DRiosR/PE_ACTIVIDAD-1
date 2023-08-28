//RiosRodriguezDaniel 372800
//22-Ago-23
//Programa que sirva para calcular el salario semanal de un trabajador donde se obtiene como dato de entrada las ​ horas semanales​ trabajadas, el ​ salario por hora​ .
//R.R.D_act1_10_932
#include <stdio.h>
int main() 
{
    float sema,hora,nor,ext,tot;
    int i,acu=0,acu2=0;
    printf("Horas semanales\n");
    scanf("%f",&sema);
    printf("Salario por hora\n");
    scanf("%f",&hora); 
    if(sema<=40)
    {
        nor=sema*hora;
        printf("salario por hora=%f\n",hora);
        printf("horas trabajadas=%f\n",sema);
        printf("Salario normal=%f\n",nor);
        printf("Salario extra=0\n");
        printf("Salario total=%f\n",nor);
    }



    else if(sema>40)
    {
        
        printf("salario por hora=%f\n",hora);
        printf("horas trabajadas=%f\n",sema);
        if(sema>40)
        {
        for(i=40;i<sema && i<50;i++)
        {
          acu=acu+1;
        }
        for(i=50;i<sema;i++)
        {
          acu2=acu2+1;
        }
        }
        ext=((hora*2)*acu)+((hora*3)*acu2);
        nor=hora*(sema-(acu+acu2));
        printf("Salario normal=%f\n",nor);
        printf("Salario extra=%f\n", ext);
        tot=ext+nor;
        printf("Salario total=%f\n",tot);
    }
    
    
    return 0;
}