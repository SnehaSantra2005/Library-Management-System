#include<stdio.h>
void insertbookrecord(){
	FILE *fp;
	char bid[10];
	char subject[200],title[100],auname[100];
	int key;
	fp=fopen("insertbookrecord.txt","a");
	if(fp==NULL){
		printf("Sorry !!! File doesn't exists.");
	}
	printf("Enter Book ID : \n");
	scanf("%s",bid);
	printf("Subject Name : [NO SPACE ALLOWED]\n");
	scanf("%s",subject);
	printf("Book Title : [NO SPACE ALLOWED]\n");
	scanf("%s",title);
	printf("Author's Name : [NO SPACE ALLOWED]\n");
	scanf("%s",auname);
	fprintf(fp,"%s %s %s %s\n",bid,subject,title,auname);
	fclose(fp);
	printf("Book's Record Added Successfully\n\n");
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
