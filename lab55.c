#include <math.h>
#include <stdio.h>
int checkProst(int x, int i)
{
  if (i == 1)
    return 1;
  else
  {
    if (x % i == 0)
      return 0;
    else
      return checkProst(x, i - 1);
  }
}
int main()
{
    int x, prost;
    printf("Введите число: ");
    scanf("%d", &x);
    prost = checkProst(x, x / 2);
    if (prost == 1)
    {
        printf("Число простое \n");
    }
    else
        printf("Число не простое \n");
    return 0;
}
