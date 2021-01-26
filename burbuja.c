#include <stdio.h>

void burbuja(int* arreglo, int longitud)
{
  int referencia;
  int contador;
  int temp;
  do
  {
    referencia = 0;
    contador = 1;
    while(contador<longitud)
    {
      if(arreglo[contador-1]>arreglo[contador])
      {
        temp = arreglo[contador -1];
        arreglo[contador-1] = arreglo[contador];
        arreglo[contador] = temp;
        referencia = contador;
      }
      contador = contador + 1;
    }
    longitud = referencia;
  }
  while(referencia!=0);
}


float obtenerMedia(int * arreglo,int longitud)
{
  int contador=0;
  int suma=0;
  float promedio;
  while(contador<longitud)
  {
    suma = suma + arreglo[contador];
    contador = contador + 1;
  }
  
  promedio = (float)suma / longitud;
  return promedio;
  
}

float obtenerMediana(int * arreglo,int longitud)
{
  int contador=0;
  int suma=0;
  float mediana;

  printf("1\n");
  burbuja(arreglo,longitud);
  printf("2\n");
  
  if(longitud%2==0)
  {
    mediana = (arreglo[longitud/2-1] + arreglo[longitud/2]) / 2;
    printf("3\n");

  }
  else
  {
    mediana = arreglo[longitud/2];
  }
  printf("4\n");

  return mediana;
  
}

float obtenerModa(int * arreglo,int longitud)
{
  int contador=0;
  int suma=0;
  int moda;
  
  /*
    ordenarArreglo()
    
    contadores[10]:ENTERO
    
    0 1 1 3 4 6 7 9 22 23
    
    contadores[1] = 1
    contadores[2] = 2
    contadores[3] = 1
    contadores[4] = 1
    contadores[5] = 1
    contadores[6] = 1
    contadores[7] = 1
    contadores[8] = 1
    contadores[9] = 1
    contadores[10] = 0
    
    contador:=1:ENTERO
    contador1:=1:ENTERO
    longitud:ENTERO
    MIENTRAS contador < longitud
      SI arreglo[contador]=arreglo[contador+1] ENTONCES
        contador1 := contador1 + 1
      FIN SI
      DE LO CONTRARIO
        
      FIN DE LO CONTRARIO
      contador := contador + 1
    FIN MIENTRAS
  
  */
  
  return promedio;
  
}


int main()
{
  int lista[10]={4,7,9,22,3,1,0,23,6,1};  
  int i=0;
  float media,mediana;
  int moda;

  while(i<10)
  {
    printf("%d ",lista[i]);
    i = i+1;
  }
  printf("\n");
  media = obtenerMedia(lista,10);
  moda = obtenerModa(lista,10);
  mediana = obtenerMediana(lista,10);

  i=0;
  while(i<10)
  {
    printf("%d ",lista[i]);
    i = i+1;
  }
  printf("\n");
  
  printf("\nLa media es %f\n",media);
  printf("\nLa mediana es %f\n",mediana);
  
  return 0;
}









