#include <stdio.h>
int check1(int x, int n)
{
  if (n == 1)
    return 1;
  if (!(x % n))
    return 0;
  else
    return check1(x, n-1);
}
int check2(int x)
{
  for (int n = 2; n < x; n ++)
  {
    if (!(x % n))
     return 0;
  }
  return 1;
}
int main()
{
  int x;
  printf("Введите число: ");
  scanf("%d", &x);
  if (x == 1)
  {
    printf("Число 1 не является простым\n");
    return 0;
  }
  printf("Число %d - ", x);
  check1(x, x-1) ? printf("простое\n") : printf("не простое\n");
  printf("Число %d - ", x);
  check2(x) ? printf("простое\n") : printf("не простое\n");
  return 0;
}
