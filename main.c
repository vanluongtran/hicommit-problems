#include <stdio.h>
int main() {
  int khoangcach, giatri, phigiaohang;
  scanf("%d %d", &khoangcach, &giatri);
  if (khoangcach <= 0 || giatri <= 0) {
      printf("INVALID\n");
    }
  if (giatri >= 500000 && khoangcach <= 15){
    phigiaohang=0;
    printf("%d", phigiaohang);
  }
  if (giatri < 500000 && khoangcach <= 5){
    phigiaohang = 15000;
    printf("%d", phigiaohang);
  }
  if (giatri < 500000 && khoangcach >6 && khoangcach <= 15){
    phigiaohang = 25000;
    printf("%d", phigiaohang);
  }
  if (giatri < 500000 && khoangcach < 15){
    phigiaohang = 40000;
    printf("%d", phigiaohang);
  return 0;
}