#ifndef __CODE_H
#define __CODE_H

typedef struct
{
  double x;
  double y;
  double z;
} R3_vector;

double R3_vector_norm(const R3_vector*);

#endif
