#include <propeller.h>
#include "test07.h"

int32_t test07::donext(void)
{
  int32_t result = 0;
  count = (count + 1);
  return count;
}

