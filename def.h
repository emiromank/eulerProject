//
//  def.h
//
//
//  Created by Emilio Román Sánchez.
//

#ifndef def_h
#define def_h

#include <stdio.h>
#include <stdlib.h>

typedef struct components
{
  float delta;
  float mass;
  float k;
  int deltaH;
}*components;

components setValuesDefault();
int changeValues(components Data);
int printData(components Data);
int solveBongeeEquation(components Data);
FILE* createFile();
int tabletoFile(int Delta, float Data[][2], FILE *fp);
int plot(FILE* gnupipe);

#endif