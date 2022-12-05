#include <stdlib.h>

int main()
{
  int *a;
  while (1)
  {
    a = (int *)malloc(sizeof(int) * 1000);
  }
}