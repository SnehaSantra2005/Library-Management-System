#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void search()
{
	FILE *fp;
	int found=1,res;
	int key;
	char sid[10],stdid[10];
	char name[200],year[100],dept[100],phone[1000];

	printf("Enter Student's ID : ");
	scanf("%s",stdid);
fp=fopen("insertrecord.txt","r");
while(fscanf(fp,"%s %s %s %s %s\n",sid,name,year,dept,phone)!=EOF)
{
res=strcmp(sid,stdid);
if(res==0)
{
	found=0;
	printf("-- SEARCH RESULT --\n");
	printf("Student ID : %s\nStudent Name : %s\nStudent Year : %s\nStudent Department : %s\nPhone No : %s\n\n",sid,name,year,dept,phone);
}

}
if(found!=0)
{
printf("records not found\n");
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
			exit(0);
			break;
	}


}
