#include <stdio.h>
#include <assert.h>

int main()
{
  double x1, x2;
  int r = scanf("%lf%lf", &x1, &x2);
  assert (r == 2);
  printf("%lf\n", x1 + x2);
  return 0;
}
