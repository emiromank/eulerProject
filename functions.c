#include <stdio.h>
#include <stdlib.h>

//#include "../libs/def.h"
#include "def.h"


#define K_CONSTANT 500
#define MASS_CONSTANT 60
#define DELTA_CONSTANT 0.2
#define DELTAH_CONSTANT 50


components setValuesDefault(){
  components initialValues = NULL;
  initialValues = calloc(1, sizeof(components));

  initialValues->delta = DELTA_CONSTANT;
  initialValues->mass = MASS_CONSTANT;
  initialValues->k = K_CONSTANT;
  initialValues->deltaH = DELTAH_CONSTANT;

  return initialValues;
}

int changeValues(components Data){
  int i=0, option=0; 
  float newValue;
  
  while (i==0){
    printData(Data);
    printf("¿Deseas cambiar algun valor?\n[1]Masa\n[2]Constante K\n[3]Delta(frecuencia de los puntos)\n[4]Delta H\n[5]Los valores son correctos\n");
    scanf("%d",&option);
    system("clear");

    switch(option){
      case 1:
        printf("¿Cual es el nuevo valor de masa?\n");
        scanf("%f", &newValue);
        Data->mass = newValue;
        printData(Data);
        break;

      case 2:
        printf("¿Cual es el nuevo valor de K?\n");
        scanf("%f", &newValue);
        Data->k = newValue;
        printData(Data);
        break;

      case 3:
        printf("¿Cual es el nuevo valor de Delta? (intervalo de tiempo)\n");
        scanf("%f", &newValue);
        Data->delta = newValue;
        printData(Data);
        break;

      case 4:
        printf("¿Cual es el nuevo valor de Delta H?(puntos en la grafica)\n");
        scanf("%f", &newValue);
        Data->deltaH = newValue;
        printData(Data);
        break;

      case 5:
        i=1;
        break;

      default:
        printf("Opcion invalida\n\n");
        break;
    }
  }
}

int printData(components Data){
  printf("Tus valores son:\n Masa %f\n Constante K: %f\n Delta: %f\n Delta H: %i\n",  Data->mass,Data->k,Data->delta,Data->deltaH);

  return 0;
}

FILE* createFile(){
  FILE *fp;
  fp=fopen("solution.dat","w");

  return fp;
}

int tabletoFile(int Delta, float Data[][2], FILE *fp){
  int i;
  for(i=0;i<Delta;i++)
  {
    fprintf(fp,"%f, %f\n",Data[i][0],Data[i][1]);
  }
}

int plot(FILE* gnupipe){
  gnupipe=popen("gnuplot -persist","w");
  fprintf(gnupipe,"plot \"solution.dat\" using 1:2 with lines\n");
  return 0;
}
