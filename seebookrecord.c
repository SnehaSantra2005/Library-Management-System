#include<stdio.h>
void seebookrecord(){
	FILE *fp;
	char bid[10];
	char subject[200],title[100],auname[100];
	int key;
	fp=fopen("insertbookrecord.txt","r");
	if(fp==NULL){
		printf("sorry!!! File Doesn't exists.");
	}
	while(fscanf(fp,"%s %s %s %s\n",bid,subject,title,auname)!=EOF)
{

	printf("Book ID : %s\nSubject Name : %s\nBook Title : %s\nAuthor's Name : %s\n\n",bid,subject,title,auname);
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
