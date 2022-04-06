#include <stdio.h>
#include <math.h>
int main()
{
  double x;
  printf("Enter x { 2.0 <= x <= 3.14 } -> ");
  scanf("%lf", &x);
  if (2 <= x && x <= 3.1)
  {
    double y = 1 / tan(M_PI * x) + acos(pow(2, x));
    double z;
    if (y < 0)
    {
      z = -1;
    }
    else if (y > 0)
    {
      z = 1;
    }
    else
    {
      z = 0;
    }
    printf("y(x) = %lf\nz(y) = %lf\n", y, z);
  }
  else
    printf("x value is incorrect!\n");
  return 0;
}
