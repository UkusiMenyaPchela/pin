#include <stdio.h>
#include <stdlib.h>
int *gen_adrr(int i, int j) {
  int *A = (int *)malloc(i * j * sizeof(int));
  if (!A) {
    printf("Ошибка выделения памяти!\n");
    exit(EXIT_FAILURE);
  }
  return A;
}
void print_matrix(int i, int j, int arr[]) {
  for (int line = 0; line < i; line++) {
    for (int row = 0; row < j; row++) {
      printf("% 4d ", arr[line * j + row]);
    }
    printf("\n");
  }
  printf("\n");
}
void sum_AB(int i, int j, int A[], int B[], int AB[]) {
  for (int line = 0; line < i; line++) {
    for (int row = 0; row < j; row++) {
      AB[line * j + row] = A[line * j + row] + B[line * j + row];
    }
  }
}
void generate_arr(int i, int j, int arr[]) {
  for (int line = 0; line < i; line++) {
    for (int row = 0; row < j; row++) {
      arr[line * j + row] = rand() % 201 - 100;
    }
  }
}
int main() {
  int i, j;
  printf("Количество строк: ");
  scanf("%d", &i);
  printf("Количество столбцов: ");
  scanf("%d", &j);
  int *A = gen_adrr(i, j);
  printf("\n A:\n");
  generate_arr(i, j, A);
  print_matrix(i, j, A);
  int *B = gen_adrr(i, j);
  printf("B:\n");
  generate_arr(i, j, B);
  print_matrix(i, j, B);
  int *AB = gen_adrr(i, j);
  printf("A+B:\n");
  sum_AB(i, j, A, B, AB);
  print_matrix(i, j, AB);
  free(A);
  free(B);
  free(AB);
  return 0;
}
