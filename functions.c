#include <stdio.h>
#include <stdlib.h>

//#include "../libs/def.h"
#include "def.h"


#define K_CONSTANT 500
#define MASS_CONSTANT 60
#define DELTA_CONSTANT 0.1
#define DELTAH_CONSTANT 100


components setValuesDefault(){
  components initialValues = NULL;
  initialValues = calloc(1, sizeof(components));

  initialValues->delta = DELTA_CONSTANT;
  initialValues->mass = MASS_CONSTANT;
  initialValues->k = K_CONSTANT;
  initialValues->deltaH = DELTAH_CONSTANT;

  return initialValues;
}


/*
FUNCION changeValues(variable con los datos, numero de la cosa que debe cambiar)
*/