#include <stdio.h>

int main()
{

    int numeros,cent,dece,unid,i,aux;
    char mat_numero[20][20][20]={
        {"  --  ",  "|   |",  "      ", "|   |", "  --  " },
        {"      ",  "    |",  "      ", "    |", "      " },
        {"  --  ",  "    |",  "  --  ", "|    ", "  --  " },
        {"  --  ",  "    |",  "  --  ", "    |", "  --  " },
        {"      ",  "|   |",  "  --  ", "    |", "      " },
        {"  --  ",  "|    ",  "  --  ", "    |", "  --  " },
        {"      ",  "|    ",  "  --  ", "|   |", "  --  " },
        {"  --  ",  "    |",  "      ", "    |", "      " },
        {"  --  ",  "|   |",  "  --  ", "|   |", "  --  " },
        {"  --  ",  "|   |",  "  --  ", "    |", "      " },
       };

do{
    printf("Ingresar 3 numeros a visualizar: ");
    scanf("%d",&numeros);
    aux = numeros;
    cent = numeros%10;
    numeros = numeros/10;
    dece = numeros%10;
    numeros = numeros/10;
    unid = numeros%10;
    numeros = numeros/10;

    printf("El numero ingresado es %d %d %d\n",unid,dece,cent);

    for (i=0;i<5;i++)
    {
        printf("%s\t", mat_numero[unid][i]);
        printf("%s\t", mat_numero[dece][i]);
        printf("%s\n", mat_numero[cent][i]);
    }


}while(aux>=0&&aux<=999);

    printf("Error!!!\nNumero fuera del rango\n");

    return 0;
}

