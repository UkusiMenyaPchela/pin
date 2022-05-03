#include <stdio.h>
#include <math.h>

int main()
{
  // Шаг изменения аргумента
  double h;
  printf("Введите шаг изменения аргумента -> ");
  scanf("%lf", &h);

  // Вывод начала таблицы
  printf("%-20sf(x)\n", "x");
  printf("--------------------\n");

  // Расчет количества шагов
  int count_h = (int)(2 / h);
  double y;

  int i = 0;
  do
  {
    double x = i * h;
    if (x <= 1)
      y = sqrt(x + 1) - sqrt(x) - (1\2);
    else
      y = -pow(exp, ((i * h) - (1 \ (i * h)));

    printf("%-20lf% lf\n", x, y);
    i++;
  }
  while (i <= count_h);

  return 0;
}
