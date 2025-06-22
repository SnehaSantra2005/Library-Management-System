#include<stdio.h>
#include"menu.c"
#define ENTER 13
#define TAB 9
#define BACKSP 8
#define SPACE 32
void loginsystem(){
	FILE *fp;
	char uname[200],password[200],ch;
	char name[200],pass[200];
	int i=0,res,resa;
	int found=1,count=0;
		fp=fopen("useridpass.txt","r");
	if(fp==NULL)
	{
		printf("file doesn't exists.");
	}
	printf("Enter UserName : ");
	scanf("%s",name);
	printf("Enter password : ");
	while(1){
		ch=getch();
		if(ch==ENTER){
			pass[i]='\0';
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
			pass[i]=ch;
			i++;
			printf("*");	
		}
	
	}

	while(fscanf(fp,"%s %s\n",uname,password)!=EOF)
	{
		res=strcmp(uname,name);
		resa=strcmp(password,pass);
		if(res==0 && resa==0)
		{
			found=0;
			printf("\nLog in successfully.\n");
			menu();
			break;
		}
		else{
			count++;
		}
		
	}
	if(count==2){
		printf("\n\ninvalid username or password.");
	}
	
}
