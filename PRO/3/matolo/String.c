#include <stdio.h>
#include <string.h>

int strlen2(char *s);
char * strcopy2(char *s1, char *s2);
void strup2(char *s);
char *strcat2(char *s1, char *s2);

int main() {

    char str1[250], str2[250], str3[250];

    printf("Zadaj svoje meno: ");
    scanf("%s", str1);
    printf("Zadaj svoje priezvisko: ");
    scanf("%s", str2);

    printf("\n%s %s", str1, str2);
    printf("tvoje priezvisko ma %d znakov\n", strlen2(str2));
    printf("Retazec je po copy: %s \n", strcopy2(str3, "slunce"));

    printf("Retazec po strcat: %s", strcat2(str1, str2));

    return 0;
}

int strlen2(char *s) {

    int count = 0;

    while(*s) {
        count++;
        s++;
    }
    return count;

}

char * strcopy2(char *s1, char *s2) {

    char * pp = s1;

    while(*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';

    return pp;

}

void strup2(char *s) {
}

char *strcat2(char *s1, char *s2) {
    int j, i;
    
    for(i = 0;*(s1+i)!='\0';i++);
    for(j = 0;*(s2+j)!='\0';j++) {
        *(s1+(i+j))=*(s2+j);
    }

    *(s1+(i+j))='\0';

    return s1;

}
