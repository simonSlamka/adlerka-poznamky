#include <stdio.h>

int main() {
  // 2. start
  char c, *pc;
  pc = &c;
  *pc = '@';
  printf("%s\n", &c);
  //2. end
  //7. start
  struct skola{
    int chlapci;
    int dievcata;
  };
  //7. end
  return 0;
}
