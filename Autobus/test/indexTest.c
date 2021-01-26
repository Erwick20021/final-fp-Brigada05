/*

int cambios[][] = {{3, 0},{5, 1},{2, 1},{4, 3},{0, 8}};
calcularPasajeros(cambios,5), 1

int cambios[][] = {{1, 0},{1, 0},{5, 1},{0, 3},{1, 1}};
calcularPasajeros(cambios,5), 3

*/

#include "..\index.c"

int main()
{
    
    int cambios[][2] = {{3, 0},{5, 1},{2, 1},{4, 3},{0, 8}};
    int cambios2[][2] = {{1, 0},{1, 0},{5, 1},{0, 3},{1, 1}};

    if(calcularPasajeros(cambios, 5)==3)
    {
        printf("OK\n");
    }
    else
    {
        printf("Error\n");
    }
    
    if(calcularPasajeros(cambios2, 5)==3)
    {
        printf("OK\n");
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}

