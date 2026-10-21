#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  if (t<15){
    puts("LANH");
  }
  if (t>=15 && t<=25){
    puts("MAT");
  }
  if (t>25 && t<35){
    puts("NONG");
  }
  if (t>=35){
    puts("RAT_NONG");
  }
  return 0;
}