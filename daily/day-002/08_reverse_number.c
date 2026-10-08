#include <stdio.h>
int main(void){int n,reverse=0;scanf("%d",&n);while(n!=0){reverse=reverse*10+n%10;n/=10;}printf("Reverse = %d\n",reverse);return 0;}
