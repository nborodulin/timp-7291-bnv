#include <stdio.h>
#include <math.h>
#include <assert.h>

int main()
{
  double x = 0, y = 0, res;
  int r = scanf("%lf%lf", &x, &y);
  assert (r == 2);
  res = pow(x,y);
  printf("%lf\n", res);
  return 0;
}
