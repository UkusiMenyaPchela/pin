#include <stdio.h>
#include <math.h>
unsigned long long int fr(unsigned long long int n, unsigned long long int a)
{
return a ? fr(n, a - 1) * n : 1;
}
unsigned long long int fl(unsigned long int n, unsigned long long int a)
{
unsigned long long int i, res = 1;
for(i = 0; i < a; i++)
res *= n;
return res;
}
int main()
{
unsigned long long int n, a;
printf("Введи число n\nn -> ");
scanf("%llu", &n);
printf("Степень a\nn -> ");
scanf("%llu", &a);
printf ("Получилось = %llu\n", fl(n, a));
return 0;
}     
