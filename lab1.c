#include  <stdio.h>
#include  <math.h>
int  main()
{
  float a, b, c;
  printf("Enter a ->");
  scanf("%f", &a);
  printf("Enter b ->");
  scanf("%f", &b);
  printf("Enter c ->");
  scanf("%f", &c);
  if(!a && !b && !c)
    return 0;
  float x = 1.0f;
  printf("f(x) = ");
  if (a)
  printf("%f*x^2", a);
  if (b)
  a ? printf("%+f*x", b): printf("%fx", b);
  if (c)
  a || b ? printf("%+f", c): printf("%fx", b);
  printf("\n");
  float f_x = a*x*x+b*x+c;
  float f_minus_x = a*-x*-x+b*-x+c;
  if (f_x == f_minus_x)
  printf("Function is even: f(x)=%f=f(-x)=%f\n", f_x, f_minus_x);
  else if (f_minus_x == -f_x)
  printf("Function is odd: f(-x) = %f = -f(x) = %f\n", f_x, f_minus_x, -f_x);

}
