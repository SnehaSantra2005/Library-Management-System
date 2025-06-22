#include<stdio.h>
#define ENTER 13
#define TAB 9
#define BACKSP 8
#define SPACE 32
void newlibrarian(){
	char uname[200],password[200],ch;
	int i=0;
	FILE *fp;
	fp=fopen("useridpass.txt","a");
	if(fp==NULL){
		printf("file doesn't exists.");
	}
	printf("Enter UserName : ");
	scanf("%s",uname);
	printf("Enter Password : ");
	while(1){
		ch=getch();
		if(ch==ENTER){
			password[i]='\0';
			break;
		}
		else if(ch==BACKSP){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}
		else if(ch==TAB || ch==SPACE)
		{
			continue;
		}
		else
		{
			password[i]=ch;
			i++;
			printf("*");	
		}
	
	}
	fprintf(fp,"%s %s\n",uname,password);
	printf("\nnew Librarian added Successfully .");
	fclose(fp);
	
}
