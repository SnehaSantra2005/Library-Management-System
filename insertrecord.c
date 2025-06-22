#include<stdio.h>
void insertrecord(){
	FILE *fp;
	int key;
	char sid[10],phone[1000];
	char name[200],year[100],dept[100];
	fp=fopen("insertrecord.txt","a");
	if(fp==NULL){
		printf("Sorry !!! File doesn't exists.");
	}
	printf("Enter Student ID : \n");
	scanf("%s",sid);
	printf("Student Name : [NO SPACE ALLOWED]\n");
	scanf("%s",name);
	printf("Student Year : \n");
	scanf("%s",year);
	printf("Student Department : \n");
	scanf("%s",dept);
	printf("Student Contact no : \n");
	scanf("%s",phone);
	fprintf(fp,"%s %s %s %s %s\n",sid,name,year,dept,phone);
	fclose(fp);
	printf("Students Record Added Successfully\n\n");
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
