#include <stdio.h>
#include <math.h>
int main()
{
  long double x;
  printf("Enter x { 2.0 <= x <= 3.1 } -> ");
  scanf("%Lf", &x);
  if (2.0f <= x && x <= 3.14f)
  {
    long double y = (1 / tan(M_PI * x)) + acos(pow(2, x));
    long double z;
    if (y < 0)
      z = -1;
    else if (y > 0)
      z = 1;
    else if (y == 0)
      z = 0;
    printf("y(x) = %Lf\nz(y) = %Lf\n", y, z);
  }
  else
    printf("x value is incorrect!\n");

  return 0;
}
