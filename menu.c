#include<stdio.h>
#include"studentsection.c"
#include"booksection.c"
#include"bookissue.c"
void menu(){
	int n;
printf("\t\t\t\t\t-------------------------------------------\n");	
printf("\t\t\t\t\t\tLIBRARY MANAGEMENT SYSTEM\n");
printf("\t\t\t\t\t-------------------------------------------");
printf("\n"); 
printf("\nPress <1> For Student section\nPress <2> For Book section\nPress <3> For Book issue section\npress <4> To exit\n");
printf("please enter correct choice : ");
scanf("%d",&n);
switch(n)
{
case 1:
	printf("welcome to student section\n");
	printf("-----------------------------\n");
	studentsection();
break;
case 2:
	printf("welcome to book section\n");
	printf("-----------------------------\n");
	booksection();
break;
case 3:
	printf("book issue section\n");
	printf("-------------------------\n");
	bookissue();
break;
case 4:
	exit(0);
default:
	printf("please enter correct choice\n");
	menu();
}
}
