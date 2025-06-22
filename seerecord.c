#include<stdio.h>
void seerecord(){
	FILE *fp;
	char sid[10],stdid[10];
	char name[200],year[100],dept[100],phone[1000];
	int key;
	fp=fopen("insertrecord.txt","r");
	if(fp==NULL){
		printf("sorry!!! File Doesn't exists.");
	}
		 
 	while(fscanf(fp,"%s %s %s %s %s\n",sid,name,year,dept,phone)!=EOF)
{

	printf("Student ID : %s\nStudent Name : %s\nStudent Year : %s\nStudent Department : %s\nPhone No : %s\n\n",sid,name,year,dept,phone);
}
	fclose(fp);
	printf("\tpress <1> to continue with this section\n\tpress <2>to go Mainmenu\n\tpress any key to exit :");
	scanf("%d",&key);
	switch(key){
		case 1:
			studentsection();
			break;
		case 2:
			menu();
			break;
		default:
			//exit(0);
			break;
	}
}


