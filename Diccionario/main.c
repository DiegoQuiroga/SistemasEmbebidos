#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define ENTR 13

void enter(void);

int main()
{
    char add[100][30],des[100][100],bus[30],*p,add1[100][30],des1[100][100],aux[30],add2[100][30],s[2]=";",*tok,*pp;
    int i=0,j,k,l,m,opc,cod,n,com,com1,cont=0,cont1;

    FILE* fichero;

     fichero = fopen("D:/alvar/OneDrive/Documents/Embebidos/Primer Corte/Lab 2/Diccionario completo/palabras.csv", "rt");

    for (i=0;i<100;i++)
    {
        fgets (add[i], 131, fichero);
        pp=strstr( add[i], s );
        if (pp)
            cont++;
    }

    for (i=0;i<cont;i++)
    {
        tok = strtok( add[i], s );
        strcpy(add[i],tok);
        tok = strtok(NULL,s);
        strcpy(des[i],tok);
    }
    i=cont;

    while(1)
    {

    printf("=========================================================\n");
    printf("=                      DICCIONARIO V1.0                 =\n");
    printf("=                                                       =\n");
    printf("=   Escoja una opcion:                                  =\n");
    printf("=                                                       =\n");
    printf("=   1. Agregar Palabra                                  =\n");
    printf("=   2. Buscar                                           =\n");
    printf("=   3. Listar                                           =\n");
    printf("=                                                       =\n");

        n=0;k=0;j=0;
        printf("    >>> ");
        scanf(" %d",&opc);

        if (opc==1)
        {
            printf("\nDigite la palabra (Maximo 30 caracteres): ");
            scanf(" %s",add[i]);
            while(j<i)
            {
                 com = strcmp(add[j], add[i]);
                 if(com==0)
                 {
                     printf("Palabra ya existente\n");
                     strcpy(add[i], "");
                 }
                 else
                     k++;
                 j++;
            }
            if(k==i)
            {
                printf("Digite la descripcion (Maximo 100 caracteres): ");
                scanf(" %[^\n]",des[i]);
                printf("Palabra agregada correctamente\n\n");
                i++;
            }
        }

        else if (opc==2)
        {
            cont1=0;
             printf("\nDigite la palabra o parte a buscar: ");
             scanf(" %s",bus);
             for(j=0;j<=i;j++)
             {
                p=strstr(add[j],bus);
                if(p)
                {
                    strcpy( add1[n], add[j]);
                    strcpy( des1[n], des[j]);
                    printf("%d. %s\n",n+1,add1[n]);
                    n++;
                    cont1++;
                }

             }

             if(cont1==0)
                 printf("No se encontro ninguna coincidencia\n");

             else
             {
             printf("Digite el codigo de la palabra para ver su significado: ");
             scanf(" %d",&cod);
             printf("%d. %s: %s\n",cod,add1[cod-1],des1[cod-1]);
             }
        }

        else if (opc==3)
        {
            for (l=0;l<i;l++)
            {
                strcpy( add2[l], add[l]);
            }
            for (l=0;l<i;l++)
                {
                    for (m=0;m<i;m++)
                    {
                        com1= strcmp( add2[l], add2[m]);
                        if ( com1 < 0 )
                        {
                            strcpy( aux, add2[l]);
                            strcpy( add2[l], add2[m]);
                            strcpy( add2[m], aux);
                        }
                    }
                }

                for(l=0;l<i;l++)
                    printf("%d. %s\n",l+1, add2[l]);
        }

        else
            printf("Comando no permitido intente de nuevo.....\n");
            enter();
    }
}

void enter(void)
{
    printf("Presione ENTER para volver al menu principal.....");
    char enter;
    while(1)
    {
        enter=getch();
        if(enter==ENTR)
        {
            system("cls");
            break;
        }
    }
}



