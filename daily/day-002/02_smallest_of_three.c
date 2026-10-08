#include <stdio.h>
int main(void){int a,b,c,smallest;scanf("%d%d%d",&a,&b,&c);smallest=a;if(b<smallest)smallest=b;if(c<smallest)smallest=c;printf("Smallest = %d\n",smallest);return 0;}
