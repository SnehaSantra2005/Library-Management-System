#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void searchbookrecord()
{
	FILE *fp;
	int found=1,res;
	char bid[10],stdid[10];
	char subject[200],title[100],auname[100];
	int key;

	printf("Enter Book's ID : ");
	scanf("%s",stdid);
fp=fopen("insertbookrecord.txt","r");
while(fscanf(fp,"%s %s %s %s \n",bid,subject,title,auname)!=EOF)
{
res=strcmp(bid,stdid);
if(res==0)
{
	found=0;
	printf("-- SEARCH RESULT --\n");
	printf("Book ID : %s\nSubject Name : %s\nBook Title : %s\nAuthor's Name : %s\n\n",bid,subject,title,auname);
}}
if(found!=0)
{
printf("records not found\n");
}
fclose(fp);

	printf("\tpress <1> to continue with this section\n\tpress <2>to go Mainmenu\n\tpress any key to exit :");
	scanf("%d",&key);
	switch(key){
		case 1:
			booksection();
			break;
		case 2:
			menu();
			break;
		default:
			exit(0);
			break;
	}

}
