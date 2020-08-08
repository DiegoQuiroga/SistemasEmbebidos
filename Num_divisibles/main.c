#include <stdio.h>
#include <math.h>

int solucion(int a, int b, int k)
{
    printf("\nLos numeros divisibles en %d son:[ ",k);
    int i,arreglo[b];
    for(i=a;i<=b;i++){
        arreglo[i]=a++;
        if(arreglo[i]%k==0){
        printf("%d ",arreglo[i]);
  }
 }
    printf("]\n");
    return 0;
}


int main()
{
int a,b,k;
    printf("Introducir inicio de rango:");
    scanf("%d",&a);
    printf("\nIntroducir fin de rango:");
    scanf("%d",&b);
    printf("\nIntroducir divisor de rango:");
    scanf("%d",&k);

    if(a>=0 && a<=b && k>0){
    solucion(a,b,k);
    }else
        printf("!!!!!!!!ERROR!!!!!!!\n");
    return 0;
}


