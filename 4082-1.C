#include<stdio.h>
#include<conio.h>
main()
{

int n;
clrscr();
printf("\n press-m");
printf("\n press-t");
printf("\n press-w");
printf("\n press-T");
printf("\n press-f");
printf("\n press-s");
printf("\n press-S");
printf("\n plz enter your choice=");
scanf("%d",&n);


  switch(n)
  {

       case'm' :
	      printf("monday");
	      break;


       case't' :
	      printf("tuesday");
	      break;

       case 'w' :
	      printf("wednesday");
	      break;

      case'T':
	      printf("Thursday");
	      break;

       case'f'  :
	      printf("friday");
	      break;

     case's':
	      printf("saturday");
	      break;


      case 'S' :
	      printf("Sunday");
	      break;

     default:
	       printf("plz enter proper char");

   }
   getch();

  }