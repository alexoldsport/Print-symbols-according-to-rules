#include <stdio.h>
#include <math.h>

int num;

void call(char c, char mas[], int aNumber, int bNumber){
  int i;
  printf("\n");
  mas[aNumber+bNumber]=c;
  for (i=1;i<=aNumber+bNumber;i++){
    printf("%c",mas[i]);
  };
    if((aNumber+bNumber<2*num) && (aNumber<num))
    if(mas[aNumber+bNumber]!='A' || mas[aNumber+bNumber-1]!='A')
    call('A',mas,aNumber+1,bNumber);
    if((aNumber+bNumber<2*num) && (bNumber<num))
    if(mas[aNumber+bNumber]!='B' || mas[aNumber+bNumber-1]!='B')
    call('B',mas,aNumber,bNumber+1);
}

void create(int num){
  int dnum = 2 * num;
  char mas[dnum];
  call('A',mas,1,0);
  call('B',mas,0,1);
}

int main(){
  int n=1;
  scanf("%i",&num);
  create(num);
  return 0;
}
