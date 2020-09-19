#include <stdio.h>

int max(int x,int y,int z);
void nums(void);

void main() {
  int maxnum,nf,ns,nt;
  printf("Zadaj tri cisla:\n");
  scanf("%d%d%d",&nf,&ns,&nt);
  maxnum = max(nf,ns,nt);
  if (maxnum > 0) {
    printf("Najvecsie cislo je %d\n",maxnum);
  }

  nums();
}
//nacita 3 cele cisla z keybrd, najst maximum z 3 zadanych cisel, na najdenie pouzit funkciu a maximum vupisat v int main(int argc, char const *argv[]) {
//funkcia kt vypise vsetki cisla od1 po zadane cislo, zvolat

int max(int x,int y,int z){
  int maxaux;

  maxaux = x;
  if (y > maxaux) {
    maxaux = y;
  }
  if (z > maxaux) {
    maxaux = z;
  }
  /*
  if (x > y &&x > z) {
    maxaux = x;
  }else if (y > x &&y > z) {
    maxaux = y;
  }else if (z > y &&z > x) {
    maxaux = z;
  } else {
    maxaux = x;
  }
  */
  return maxaux;
}

void nums(void){
  int limit;
  printf("Zadaj max cislo\n");
  scanf("%d",&limit);
  printf("------------------------\n");
  for (int i = 0; i < ++limit; i++) {
    printf("%d\n",i);
  }

}
