#include <stdio.h>
int main(void){int n,i,prime=1;scanf("%d",&n);if(n<2)prime=0;for(i=2;i*i<=n;i++)if(n%i==0)prime=0;printf(prime?"Prime\n":"Not prime\n");return 0;}
