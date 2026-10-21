#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  if (t<15){
    puts("LANH");
  }
  else if (t >= 15 && t <= 25){
        puts("MAT");
  }
  else if (t > 25 && t <= 35){
    puts("NONG");
  }
  
  else{
    puts("RAT_NONG");
  }
  return 0;
}