#include <propeller.h>
#include "test39.h"

#ifdef __GNUC__
#define INLINE__ static inline
#else
#define INLINE__ static
#endif

uint8_t test39::dat[] = {
  0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
};
int32_t test39::Setword(int32_t X, int32_t A)
{
  int32_t result = 0;
  ((uint16_t *)&dat[0])[X] = A;
  return result;
}

int32_t test39::Setbyte(int32_t X, int32_t B)
{
  int32_t result = 0;
  ((uint8_t *)&dat[16])[X] = B;
  return result;
}

