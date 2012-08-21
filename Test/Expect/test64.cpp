#include <propeller.h>
#include "test64.h"

#ifdef __GNUC__
#define INLINE__ static inline
#else
#define INLINE__ static
#endif
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))

uint8_t test64::dat[] = {
  0x00, 0x00, 0x10, 0x41, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
};
int32_t test64::Getit(void)
{
  int32_t result = 0;
  return (int32_t)(&(*(int32_t *)&dat[0]));
}

