#include "code.h"
#include "math.h"

/**
 * @brief Compute vector norm.
 *
 * Computes the norm of an \f$R^3\f$ vector,
 * \f$r=\sqrt{x^2 + y^2 + z^2}\f$
 * @param vec Input vector.
 * @return The norm \f$r\f$.
 */
double R3_vector_norm(const R3_vector* vec)
{
    double n = sqrt(vec->x*vec->x + vec->y*vec->y * vec->z*vec->z);
    return(n);
}
