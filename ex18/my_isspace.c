#include <stdio.h>

int my_isspace(char param_1)
{
  if (param_1 == ' ' || param_1 == '\t' || param_1 == '\n' ||
      param_1 == '\v' || param_1 == '\f' || param_1 == '\r') {
    return 1;
  }
  return 0;
}