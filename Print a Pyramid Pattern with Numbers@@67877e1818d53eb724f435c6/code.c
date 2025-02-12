#include <stdio.h>
int main() {
  int i,j,k,rows,number=1;
  scanf("%d",&rows);
  for(i=1;i<=rows;i++) {
    for(j=1;j<=rows-i;j++) {
      printf(" ");
    }
    for(k=1;k<=i;k++) {
      printf("%d ",number);
      number++;
    }
    printf("\n");
  }
  return 0;
}