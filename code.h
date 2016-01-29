#ifndef __CODE_H
#define __CODE_H

/**
 * @brief A vector in \f$R^3\f$
 *
 * Contains coordinates for x, y and z.
 */
typedef struct
{
    double x; ///< x coordinate
    double y; ///< y coordinate
    double z; ///< z coordinate
} R3_vector;

double R3_vector_norm(const R3_vector*);

#endif
