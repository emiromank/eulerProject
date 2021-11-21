#include <stdio.h>
#include <stdlib.h>

#include "def.h"

int main(void)
{ 
  //components Values = NULL;
  //Values = calloc(1, sizeof(components));
  ///Values = setValuesDefault();
  
  FILE *fp;


  //printData(Values);

  //changeValues(Values);
  
  //fp=createFile();
  //fprintf(fp,"lolol\n");

  //gnuplot
  FILE *gnupipe;
    gnupipe=popen("gnuplot -persist","w");
  fprintf(gnupipe,"plot \"solution.dat\" using 1:2 with lines\n");
  //plot(gnupipe);

  pclose(gnupipe);

  
  return 0;
}  