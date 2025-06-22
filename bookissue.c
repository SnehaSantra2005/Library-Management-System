#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"issue.c"
#include"submitrenewal.c"
void bookissue(){
	int n;
	printf("\t\tPress <1> To issue book\n");
	printf("\t\tPress <2> To submit / renewal book\n");
	printf("\t\tPress <3> To Main Menu\n");
	printf("\t\tPlease enter correct choice : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("-- BOOK ISSUE SECTION --\n");
			issue();
			break;
		case 2:
			printf("-- SUBMIT / RENEWAL SECTION --\n");
			submitrenewal();	
			break;
		case 3:
			menu();
			break;
		default:
			printf("please choose the correct option : \n");	
			bookissue();
			break;
	}
}
