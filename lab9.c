#include <stdio.h>
#include <string.h>
int main()
{
  char str[1000]="";
  char *rstr;
  rstr = gets (str);
  int qnt = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
      qnt++;
  }
  char str2[qnt];
  char delim[] = ",.;:!?- ";
  char *p = strtok(str, delim);
  int len = strlen(p);
  str2[0] = p[len-1];
  int idx = 1;
  while (p = strtok(NULL, delim))
  {
    len = strlen(p);
    str2[idx++] = p[len-1];
  }
  str2[idx] = '\0';
  puts(str2);
  return 0;
