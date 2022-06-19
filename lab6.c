#include <stdio.h>
#include <stdlib.h>
void print_arr(int i, int arr[])
{
  for(int idx = 0; idx < i; idx++)
  {
    printf("% 4d ", arr[idx]);
  }
  printf("\n");
}
void generate(int i, int arr[])
{
  for(int idx = 0; idx < i; idx++)
  {
    arr[idx] = rand() % 201 - 100;
  }
}
void maxn(int idx_max[], int maxm[], int arr[], int i) {
  int idx_m = 0;
  int max_v = arr[0];
  for(int iter = 0; iter < 3; iter++){
    for(int idx = 1; idx < i; idx++){
      if(arr[idx] > max_v && idx != idx_max[0] && idx != idx_max[1]){
        max_v = arr[idx];
        idx_m = idx;
      }
    }
    idx_max[iter] = idx_m;
    maxm[iter] = max_v;
    max_v = arr[0];
  }
}
void rewrite(int maxm[], int idx_max[], int arr[], int i){
  int sum = maxm[0] + maxm[1] + maxm[2];
  int mul = maxm[0] * maxm[1] * maxm[2];
  int write_idx = (idx_max[0] + idx_max[1] + idx_max[2]) % i;
  printf("%d\n", mul);
  printf("%d\n", sum);
  arr[write_idx] = mul - sum;
}
int main()
{
  int i;
  printf("Введите размер массива: ");
  scanf("%d", &i);
  int arr[i];
  generate(i, arr);
  print_arr(i, arr);
  int maxm[3];
  int idx_max[3] = {0};
  maxn(idx_max, maxm, arr, i);
  printf("Максимумы:\n");
  print_arr(3, maxm);
  printf("Индексы максимумов:\n");
  print_arr(3, idx_max);
  rewrite(maxm, idx_max, arr, i);
  printf("Измененный массив:\n");
  print_arr(i, arr);
  return 0;
}
