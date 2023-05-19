#include<stdio.h>
main()
{
    char ch;
    printf("enter character value=");
	scanf("%c",&ch);
	if(ch>='a' &&  ch<='z')
    {
	    printf("%c value is small",ch);
	}
    else if(ch>='0' &&  ch<='9')
	{
		printf("%c value is digit",ch);
	}
	else if(ch>='A' &&  ch<='Z')
	{
		printf("%c value is capital",ch);
	}
	else
	{
	    printf("%c value is special char",ch);	
	}
}
