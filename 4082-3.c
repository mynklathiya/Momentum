#include<stdio.h>
main()
{
    int n;
    printf("please enter value\n");
    scanf("%d",&n);
    (n%2==0)? printf("%d even number\n",n):printf("%d odd number\n",n);
}
