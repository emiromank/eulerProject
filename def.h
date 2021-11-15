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


#endif