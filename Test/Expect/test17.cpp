#include <propeller.h>
#include "test17.h"

#ifdef __GNUC__
#define INLINE__ static inline
#else
#define INLINE__ static
#endif

uint8_t test17::dat[] = {
  0xf1, 0x05, 0xbc, 0xa0, 0x01, 0x00, 0x7c, 0x5c, 0x01, 0x00, 0x00, 0x00, 
};
int32_t test17::Start(void)
{
  int32_t result = 0;
  return (int32_t)(&(*(int32_t *)&dat[0]));
}

