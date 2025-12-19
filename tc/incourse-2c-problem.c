#include <stdio.h>

int main() {
  int p=10, q, r;
  q= --p+20;
  r= p++ -25;
  printf("%d %d %d", p, q ,r);
  return 0;
}
