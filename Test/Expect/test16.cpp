#include <propeller.h>
#include "test16.h"

#ifdef __GNUC__
#define INLINE__ static inline
#else
#define INLINE__ static
#endif
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))

uint8_t test16::dat[] = {
  0xf1, 0x03, 0xbc, 0xa0, 0x01, 0x00, 0x00, 0x00, 
};
int32_t test16::Start(void)
{
  int32_t result = 0;
  return result;
}

