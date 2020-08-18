#include <stdio.h>
#include <ctype.h>
typedef struct{
 unsigned char pelicula;
 unsigned char sala;
}BOLETA;

typedef struct{
    unsigned char sala;

}ROOM;
ROOM prueba;
char salas[18][18]={
    {'1',' ',' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
    {'2','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'3','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'4','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'5','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'6','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'7','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'8','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
    {'9','|','|','x','x','x','x','x','x','|','|','x','x','x','x','x','x'},
};
BOLETA boleta[20];

void menu();
void ventas();

int p,i;

int main()
{
    int op;

    printf("\n\n******************Cine Arboleda******************");
    printf("\n1.Ingresar Peliculas");
    printf("\n2.Comprar Boletos");
    printf("\n3.Ventas");
    printf("\n4.Salir");
    printf("\nSeleccione: ");
    scanf("%d",&op);


    switch(op){

    case 1:
        menu();
        main();
        break;

    case 2:
        ventas();
        main();
        break;

    case 3:
        main();
        break;
    case 4:
        break;
    }

    //printf("\nBye World!\n");
    return 0;
}

void menu(){
    printf("Cuantas peliculas va a ingresar: ");
    scanf("%d",&p);

        for(i=0;i<p;i++){
            printf("\nIngrese la pelicula [%d]:",i+1);
            scanf("%s",&boleta[i].pelicula);
}

        for(i=0;i<p;i++){
            printf("\nAsigne sala [a-e] a %s:",&boleta[i].pelicula);
            fflush(stdin);
            scanf("%c",&boleta[i].sala);
            boleta[i].sala = tolower(boleta[i].sala);

            if(boleta[i].sala=='a'||boleta[i].sala=='b'||boleta[i].sala=='c'||boleta[i].sala=='d'||boleta[i].sala=='e'){
                printf("%s fue asignada exitosamente en la sala %c",&boleta[i].pelicula,boleta[i].sala);          
            }else
            {
                printf("La sala (%c) no existe",boleta[i].sala);
                i--;
            }


        }

}

void ventas(int f,int c){
unsigned int x,fila,columna,libre=1;
   printf("Que pelicula desea ver?\n");

   for(i=0;i<p;i++){
       printf("%d.%s\n",i+1,&boleta[i].pelicula);
   }
   printf("\n>>");
   scanf("%d",&x);

printf("\nVisualizando sala %c",boleta->sala);


    for(f=0;f<11;f++){
        for(c=0;c<1;c++){
         printf("\n%s",&salas[f][c]);
        }
    }

    fflush(stdin);

    do
    {
        printf("\nSeleccione la fila: ");
        scanf("%i",&fila);
        printf("Seleccione la columna: ");
        scanf("%i",&columna);
        if(salas[fila-1][columna-1]=='x')
        {
            libre = 0;
            salas[fila-1][columna-1] = 'o';
           for(f=0;f<10;f++)
           {
                for(c=0;c<18;c++)
                {
                    printf("%c ",salas[f][c]);
                }
                printf("\n");
            }
            }else if(salas[fila-1][columna-1]=='-'){
                printf("\nEs la pantalla\n");
            }else if(salas[fila-1][columna-1]=='|'){
                printf("\nEs el pasillo\n");
            }else{
            printf("La silla esta ocupada! Seleccione otra.");
        }
    }while(libre==1);


    }




