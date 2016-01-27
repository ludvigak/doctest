#include "code.h"
#include "math.h"

double R3_vector_norm(const R3_vector* vec)
{
    double n = sqrt(vec->x*vec->x + vec->y*vec->y * vec->z*vec->z);
    return(n);
}
