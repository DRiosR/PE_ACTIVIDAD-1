//RiosRodriguezDaniel 372800
//22-Ago-23
//Algoritmo que sirva para desplegar el Total de una llamada telefónica donde se pide como datos de entrada los ​ minutos​ y el ​ tipo de llamada
//R.R.D_act1_11_932
#include <stdio.h>
int main()
{
    float minutos,tipo,iva,subtotal,total;
    float na,nd;
    int i,acu=0,acu2=0;
    printf("Cuantos minutos fueron\n");
    scanf("%f",&minutos);
    printf("Tipo de llamada\n");
    printf("local         =1\n");
    printf("nacional      =2\n");
    printf("internacional =3\n");
    scanf("%f",&tipo);

    if(tipo==1)
    {
      printf("Subtotal=3\n");
      iva=3*.16;
      printf("iva=%f\n",iva);
      total=iva+3;
      printf("total=%f\n",total);
    }
    if (tipo==2)
    {
        for(i=3;i<minutos;i++)
        {
          acu=acu+1;
        }
    na=7*(minutos-acu);
    nd=2*acu;
    subtotal=na+nd;
    printf("Subtotal=%f\n",subtotal);
    iva=subtotal*.16;
    printf("iva=%f\n",iva);
    total=iva+subtotal;
      printf("total=%f\n",total);
    }

    if (tipo==3)
    {
        for(i=2;i<minutos;i++)
        {
          acu=acu+1;
        }
    na=9*(minutos-acu);
    nd=4*acu;
    subtotal=na+nd;
    printf("Subtotal=%f\n",subtotal);
    iva=subtotal*.16;
    printf("iva=%f\n",iva);
    total=iva+subtotal;
      printf("total=%f\n",total);
    }



    return 0;
}