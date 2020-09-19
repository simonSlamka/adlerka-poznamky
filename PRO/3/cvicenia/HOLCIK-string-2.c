#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strup2(char *s);
int strlen2(char *s);
char * strcat2(char *s1, char *s2);
char * strcpy2(char *s1, char *s2);

/*
Dobrý deň,
Chcem sa ospravedlniť za neskoré odovzdanie, vzhľadom na to, že som chýbal,
som si musel zohnať kód, ktorý žiaci robili na hodine a aj zadanie.
S pozdravom,
Filip Holčík.
*/

int main(){
  char str1[250], str2[250], str3[250];

  printf("Ako sa voláš predným menom?\n");
  scanf("%s",str1);

  printf("Ako sa voláš prezviskom?\n");
  scanf("%s",str2);

  printf("Celé tvoje meno je %s %s.\n",str1,str2);

  printf("Priezvisko ma pocet znakov: %d\n",strlen2(str2));

  printf("Ehm, hups? ten string3, ktory ste nezadefinovali, presiel evoluciou a je %s, machine learning\n",strcpy2(str3,"slniecko"));

  printf("A tvoje meno spojene s priezvyskom je: %s\n",strcat2(str1,str2));

  return 0;
}

int strlen2(char *s)/* (char *s != '\0') */{
    int count=0;
    while(*s){
        count++;
        s++;
    }
    return count;
}

char * strcpy2(char *s1, char *s2){
    char * pp = s1;
    while(*s2){
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1='\0';
    return pp;
}

void strup2(char *s){
  if((*s>='a')&&(*s<='z')){
    *s=*s-('a'-'A');
  }
}


char * strcat2(char *s1, char *s2){
  //definovanie pomocnej premennej sluziacej na odmeranie dlzky stringu 1
  int aux = 0;

  //'odmeranie' stringu pomocou cyklu
  for (;*(s1+aux)!='\0'; aux++);

  /*
  prenos jednotlivych charov zo stringu 2 na dalsiu poziciu na stringu 1,
  aux sa musi zvysit, lebo to ukazuje na miesto kam sa ma ulozit char zo
  stringu s2, i sa musi zvysit, lebo prechadzame na dalsiu poziciu.
  */
  for (int i = 0;*(s2+i)!='\0'; i++,aux++) {
    *(s1+aux) = *(s2+i);
  }

  //ukoncime string
  *(s1+aux) = '\0';

  //vratime ho
  return s1;
}
