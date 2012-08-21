#include <propeller.h>
#include "test95.h"

#ifdef __GNUC__
#define INLINE__ static inline
#else
#define INLINE__ static
#endif
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))


//
// and here are the C versions of the methods
//
int32_t test95::Square(int32_t x)
{
  return x*x;
}


