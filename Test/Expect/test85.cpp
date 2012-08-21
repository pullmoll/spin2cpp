#include <propeller.h>
#include "test85.h"

#ifdef __GNUC__
#define INLINE__ static inline
#else
#define INLINE__ static
#endif
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))

int32_t test85::Main(void)
{
  int32_t result = 0;
  Fds.Start(31, 30, 0, 115200);
  Fds.Str((int32_t)"object array test\r\n");
  Printn(0);
  Printn(1);
  Printn(2);
  Fds.Str((int32_t)"increment v[0]\n\r");
  V[0].Incn();
  Printn(0);
  Printn(1);
  Printn(2);
  return result;
}

int32_t test85::Printn(int32_t I)
{
  int32_t	R;
  int32_t result = 0;
  Fds.Str((int32_t)"v[");
  Fds.Dec(I);
  Fds.Str((int32_t)"] = ");
  R = V[I].Getn();
  Fds.Dec(R);
  Fds.Str((int32_t)"\n\r");
  return result;
}

