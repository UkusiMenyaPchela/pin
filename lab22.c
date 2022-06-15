#include <stdio.h>
#include <math.h>
int main()
{
  float a, x;
  printf("Введите число a ∈ (-∞; 0) ⋃ (0; +∞): ");
  scanf("%f", &a);
  if(a == 0.0)
  {
    printf("Неправильное значение параметра a\n");
    return 0;
  }
  else if(a < 0.0)
  {
    printf("Введите число x: ");
    scanf("%f", &x);
    if (((int)x != x) && isnormal(x))
    {
      printf("Неправильное значение аргумента x\n");
      return 0;
    }
  }
  else
  {
    printf("Введите число x: ");
    scanf("%f", &x);
  }
  double y = (pow(a,x)+pow(a,-x))/2.0;
  printf("y(x) = %lf\n", y);
  if (y < -1.0 || y > 2)
  {
    printf("Функция z(y) не определена\n" );
  }
  else
  {
    double z = sqrt(2.0 + y - pow(y, 2));
    printf("z(y) = %lf\n", z);
  }
  return 0;
}
