#include <stdio.h>
int main(void){int a,b,c,largest;scanf("%d%d%d",&a,&b,&c);largest=a;if(b>largest)largest=b;if(c>largest)largest=c;printf("Largest = %d\n",largest);return 0;}
