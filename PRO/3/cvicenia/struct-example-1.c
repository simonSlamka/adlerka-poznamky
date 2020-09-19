#include <stdio.h>

struct human{
  char name[20];
  char surName[20];
  int age;
  int weight;
  float height;
};

int main() {
  struct human student;
  printf("Zadaj meno: \n");
  scanf("%s",student.name);
  printf("Zadaj priezvysko: \n");
  scanf("%s",student.surName);
  printf("Zadaj vek: \n");
  scanf("%d",&student.age);
  printf("Zadaj hmotnosť: \n");
  scanf("%d",&student.weight);
  printf("Zadaj výšku: \n");
  scanf("%f",&student.height);
  printf("Študent %s %s o veku %d ťažký %d kg vysoký %f\n", student.name,
  student.surName, student.age, student.weight, student.height);
  return 0;
}
