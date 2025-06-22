#include<stdio.h>
#include"insertrecord.c"
#include"seerecord.c"
#include"searchrecord.c"

void studentsection()
{
 int a;
 int stdid;
printf("\t\tPress <1> To see record\n");
printf("\t\tPress <2> To insert record\n");
printf("\t\tPress <3> To search record\n");
printf("\t\tPress <4> To Main Menu\n");
printf("please enter your choice : ");
scanf("%d",&a);
switch(a)
{
case 1:
	printf("-- SEE RECORDS --\n");
	seerecord();
break;
case 2:
	printf("-- INSERT RECORD --\n");
	insertrecord();
break;
case 3:
	printf("-- SEARCH RECORD --\n\n");
	search();
	break;
case 4:
	printf("-- MAIN MENU --\n\n");
	menu();
	break;	
default:
printf("sorry !!! please enter correct value\n");
studentsection();
}
}

