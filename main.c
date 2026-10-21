#include <stdio.h>
int main() {
  int khoangcach, giatri, phigiaohang;
  scanf("%d %d", &khoangcach, &giatri);
  if (khoangcach <= 0 || giatri <= 0) {
      printf("INVALID\n");
    }
  else {
  if (giatri >= 500000 && khoangcach < 15){
    phigiaohang=0;
    printf("%d\n", phigiaohang);
  }
  else if (giatri < 500000 && khoangcach < 5){
    phigiaohang = 15000;
    printf("%dn\n", phigiaohang);
  }
  else if (giatri < 500000 && khoangcach >=5 && khoangcach < 15){
    phigiaohang = 25000;
    printf("%d\n", phigiaohang);
  }
  else{
    phigiaohang = 40000;
    printf("%d\n", phigiaohang);
  }
  }
  return 0;
}