#include <stdio.h>
#include <math.h>

int main()
{
   int diam,xi,yi,x,y,cont=0,i,rad,ban=0,pot;
   double pit;

   printf("Ingrese diametro de la circunferencia entre 1 y 100: ");
   scanf("%d",&diam);

   rad=diam/2;

   printf("Ingrese coordenadas iniciales (x,y): ");
   scanf("%d,%d",&xi,&yi);

   for(i=0;i<13;i++)
   {
       printf("Ingrese valor de coordenadas (x,y) %d: ",i+1);
       scanf("%d,%d",&x,&y);

       if((x==1 || x==0 || x==-1) && (y==1 || y==0 || y==-1))
       {
               xi+=x;
               yi+=y;

               pot=(xi*xi)+(yi*yi);
               pit=sqrt(pot);

               if(pit>=-rad && pit<=rad && ban==0)
               {
                   cont++;
               }

               if(pit>rad)
               {
                   ban=1;
               }
       }
       else
       {
           printf("ERROR, los valores de las coordenadas deben ser 1,0 o -1\n");
           i=i-1;
       }

   }

   printf("El numero de movimientos dentro del circulo fue: %d\n",cont);

}
