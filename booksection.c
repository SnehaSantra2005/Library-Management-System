#include<stdio.h>
#include<stdlib.h>
#include"insertbookrecord.c" 
#include"seebookrecord.c"
#include"searchbookrecord.c"

void booksection()
{
	char name[100];
 int a;
printf("\t\tPress <1> To see book record\n");
printf("\t\tPress <2> To insert book \n");
printf("\t\tPress <3> To search book\n");
printf("\t\tPress <4> To Main Menu\n");
printf("please enter your choice : ");
scanf("%d",&a);
switch(a)
{
case 1:
	printf("-- SEE RECORDS --\n");
	seebookrecord();
break;
case 2:
	printf("-- INSERT RECORD --\n");
	insertbookrecord();
break;
case 3:
	printf("-- SEARCH BOOKS --\n");	
	searchbookrecord();
break;
case 4:
	printf("-- MAIN MENU --\n");	
	menu();
break;
 
default:
printf("sorry !!! please enter correct value\n");
booksection();
}
}



