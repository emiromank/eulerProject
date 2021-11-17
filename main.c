#include <stdio.h>
#include <stdlib.h>

#include "def.h"

int main(void)
{ 
  components Values = NULL;
  Values = calloc(1, sizeof(components));
  Values = setValuesDefault();
  
  FILE *fp;


  printData(Values);

  changeValues(Values);
  
  fp=createFile();
  fprintf(fp,"lolol\n");

  return 0;
}  