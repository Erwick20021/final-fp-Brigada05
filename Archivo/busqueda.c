#include <string.h>
#include <stdio.h>

struct persona
{
    char nombre[50];
    int edad;
    float peso;
    char direccion[50];
};


int main()
{
    struct persona baseDeDatos[10];
    char elNombre[60];
    int contador;

    strcpy(baseDeDatos[0].nombre,"Carlos");
    baseDeDatos[0].edad = 18;
    baseDeDatos[0].peso = 42.2;
    strcpy(baseDeDatos[0].direccion,"Neza");

    strcpy(baseDeDatos[1].nombre,"Maria");
    baseDeDatos[1].edad = 17;
    baseDeDatos[1].peso = 50.2;
    strcpy(baseDeDatos[1].direccion,"La condesa");

    strcpy(baseDeDatos[2].nombre,"Svetlana");
    baseDeDatos[2].edad = 22;
    baseDeDatos[2].peso = 54.2;
    strcpy(baseDeDatos[2].direccion,"Las lomas");

    /* ... hasta 10 */

    printf("Dame el nombre: ");
    scanf("%s",elNombre);

    for(contador=0;contador<3;contador=contador+1)
    {
        if(strcmp(elNombre, baseDeDatos[contador].nombre)==0)
        {
            printf("%s tiene una edad de %d,un peso de %f y vive en %s",baseDeDatos[contador].nombre,baseDeDatos[contador].edad,baseDeDatos[contador].peso,baseDeDatos[contador].direccion);
            break;
        }
    }

    return 0;
}