#include <stdio.h>
#include <stdlib.h>
void print_matrix(int i, int j, int arr[][j])
{
  for(int line = 0; line < i; line++)
  {
    for(int row = 0; row < j; row ++)
    {
      printf("% 4d ", arr[line][row]);
    }
  printf("\n");
  }
  printf("\n");
}
void sum_AB(int i, int j, int A[][j], int B[][j], int AB[][j])
{
  for(int line = 0; line < i; line++)
  {
    for(int row = 0; row < j; row ++)
    {
      AB[line][row] = A[line][row] + B[line][row];
    }
  }
}
void generate_arr(int i, int j, int arr[][j])
{
  for(int line = 0; line < i; line++)
  {
    for(int row = 0; row < j; row ++)
    {
      arr[line][row] = rand() % 201 - 100;
    }
  }
}
int main()
{
  int i, j;
  printf("Введите размерность матрицы:\n");
  printf("Количество строк: ");
  scanf("%d", &i);
  printf("Количество столбцов: ");
  scanf("%d", &j);
  int A[i][j];
  printf("\nA:\n");
  generate_arr(i, j, A);
  print_matrix(i, j, A);
  int B[i][j];
  printf("B:\n");
  generate_arr(i, j, B);
  print_matrix(i, j, B);
  int AB[i][j];
  printf("A+B:\n");
  sum_AB(i, j, A, B, AB);
  print_matrix(i, j, AB);
  return 0;
}
