#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable : 4996)

struct friends {
  char* surname = (char*)malloc(sizeof(char) * 100);
  char* name = (char*)malloc(sizeof(char) * 100);
  char* patronymic = (char*)malloc(sizeof(char) * 100);
  struct tm date_of_birth;
  char* address = (char*)malloc(sizeof(char) * 100);
  char* phone_number = (char*)malloc(sizeof(char) * 100);
};


// Функция добавления записи
void add_note(friends friiends[], int count){
  //int date;
  char* data_input = (char *)malloc(sizeof(char) * 100);
  printf("Enter surname: ");
  fgets(data_input, 100, stdin);
  data_input[strlen(data_input) - 1] = 0;
  sprintf(friends[count].surname, "%s", data_input);
  printf("Enter name: ");
  fgets(data_input, 100, stdin);
  data_input[strlen(data_input) - 1] = 0;
  sprintf(friends[count].name, "%s", data_input);
  printf("Enter patronymic: ");
  fgets(data_input, 100, stdin);
  data_input[strlen(data_input) - 1] = 0;
  sprintf(friends[count].patronymic, "%s", data_input);
  printf("Enter date of birth (dd.mm.yyyy): ");
  int month, year;
  scanf("%d.%d.%d", &friends[count].date_of_birth.tm_mday, &month, &year);
  month--;
  year -= 1900;
  friends[count].date_of_birth.tm_mon = month;
  friends[count].date_of_birth.tm_year = year;
  flush_input();
  printf("Enter address: ");
  fgets(data_input, 100, stdin);
  data_input[strlen(data_input) - 1] = 0;
  sprintf(friends[count].address, "%s", data_input);
  printf("Enter phone number: ");
  fgets(data_input, 100, stdin);
  data_input[strlen(data_input) - 1] = 0;
  sprintf(friends[count].phone_number, "%s", data_input);
}
// Функция печати всех записей
void print_notes(friends friiends[], int count)
{
    for(int i = 0; i < count; i++)
      char date_b[15];
      strftime(date_b, 15, "%d.%m.%Y", &friends[i].date_of_birth);
      printf("%d. Фамилия: %s; Имя: %s; Отчество: %s; Дата рождения: %s; Адрес: %s; Номер телефона: %s\n", i + 1, friends[i].surname, friends[i].name, friends[i].patronymic, date_b, friends[i].address, friends[i].phone_number);
}

// Удаление записи по номеру
void del_note(friends friiends[], int count, int del) 
{
  for (int i = del; i < count - 1; i++) {
    friends temp = friiends[i]  
    friiends[i] = friiends[i + 1];
    friiends[i + 1] = temp;
  }
}

int main(){
  int n = 0; 
  int del;
  char* query = (char*)malloc(sizeof(char) * 100);
  struct friends friiends[20];
  
  printf(" \"1\" Добавить новую запись\n");
  printf(" \"2\" Удалить запись\n");
  printf(" \"3\" Просмотреть все записи\n");
  printf(" \"4\" Выборка записей по месяцу рождения\n");
  printf(" \"5\" Завершить программу\n");

  while (strcmp(query, "5"))
  {
      fgets(query, 100, stdin);
      query[strlen(query) - 1] = 0
      if (!strcmp(query, "1"))
      {
          add_note(friiends, n);
          n++;
      }
      else if (!strcmp(query, "3"))
        print_notes(friiends, n);
      else if (!strcmp(query, "4"))
      {
        int month;
        printf("Введите месяц для поиска (от 1 до 12)\n");
        scanf("%d", &month);
        print_month_notes(frends, count, month);
      } 
      else if (!strcmp(query, "2"))
      {
          printf("Выберите запись, которую хотите удалить: ");
          scanf("%ls", &del);
          fgets(query, 10, stdin);
          del_note(friiends, n, del - 1);
          n--;
      }
  }
  return 0;
}
