#include<stdio.h>
#include"loginsystem.c"
#include"newlibrarian.c"
void password(){

	int n;
	printf("\t\t\t\t\t-------------------------------------------\n");	
printf("\t\t\t\t\t\tLIBRARY MANAGEMENT SYSTEM\n");
printf("\t\t\t\t\t-------------------------------------------");
printf("\n"); 
	printf("-- LIBRARIAN SECTION --\n");
	printf("press <1> to add new Librarian.\n");
	printf("press <2> to login to system\n");
	printf("please enter your choice : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			newlibrarian();
			break;
		case 2:
			loginsystem();
			break;
		default	:
			printf("please enter correct choice.");

	}
	
}
