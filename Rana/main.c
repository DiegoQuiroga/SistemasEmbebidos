#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,d;
    float saltos;

    printf("ingrese x:");scanf("%f",&x);
    printf("ingrese y:");scanf("%f",&y);
    printf("ingrese d:");scanf("%f",&d);

    if(x<=y&&x>0&&d>0){
        saltos=ceil((y-x)/d);
        printf("La rana debe dar minimo %.1f saltos\n\n",saltos);
        int i;
        printf("<-");
        for(i=0;i<saltos;i++){
        printf("-*-");
}
        printf("->\n\n");
    }else
        return 0;
    return 0;
}
