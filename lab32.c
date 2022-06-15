#include <stdio.h>
#include <math.h>1
int main()
{
  double h;
  printf("Введите шаг изменения аргумента:  ");
  scanf("%lf", &h);
  printf("%-20sf(x)\n", "x");
  printf("-----------------------------\n");
  int count_h = (int)(2 / h);
  double y;
  for (int i = 0; i <= count_h; i++)
  {
    double x = i * h;
    if (x <= 1)
      y = cos(x)*exp(-pow((i * h), 2));
    else
      y = log(x + 1) - sqrt(4 - pow(x, 2));

    printf("%-20lf% lf\n", x, y);
  }
  return 0;
}
