#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void issue(){
	FILE *fp,*fp2,*fp3;
	int found=1,res;
	char stuid[10];
	char booid[10];
	char sid[10];
	char name[200],year[100],dept[100],phone[1000];
	int found1=1,res1;
	char bid[10];
	char subject[200],title[100],auname[100];
	char date[20];
	int key,count=0;
	printf("Enter Student's ID : ");
	scanf("%s",stuid);
	fp2=fopen("bookissuerecord.txt","r");
	while(fscanf(fp2,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date)!=EOF)
	{
		res=strcmp(sid,stuid);
		if(res==0)
		{
			count++;
		}
	}

	if(count<=4){
		printf("Number of lending books : %d\n",count);
	}
	else
	{
		printf("Sorry. you have already lend maximum books\n");
		printf("please submit to lend new books.\n\n");
		bookissue();
	}
	fclose(fp2);
	
	fp=fopen("insertrecord.txt","r");
	if(fp==NULL){
		printf("File Doesn't exists.");
	}
		while(fscanf(fp,"%s %s %s %s %s\n",sid,name,year,dept,phone)!=EOF)
			{
				res=strcmp(sid,stuid);
					if(res==0)
						{
						found=0;
						printf("-- SEARCH RESULT --\n");
						printf("Student ID : %s\nStudent Name : %s\nStudent Year : %s\nStudent Department : %s\nPhone No : %s\n\n",sid,name,year,dept,phone);
						printf("Enter Book's ID : ");
						scanf("%s",booid);
						fp=fopen("insertbookrecord.txt","r");
						
						while(fscanf(fp,"%s %s %s %s\n",bid,subject,title,auname)!=EOF)
									{
									res1=strcmp(bid,booid);
									if(res1==0)
									{
										found1=0;
										printf("Book ID : %s\nSubject Name : %s\nBook Title : %s\nAuthor's Name : %s\n\n",bid,subject,title,auname);
										printf("Enter Date  (VALID FOR 10 DAYS ONLY) :");
										scanf("%s",date);
								        fp3=fopen("bookissuerecord.txt","a");
								        fprintf(fp3,"%s %s %s %s %s %s %s %s\n\n",sid,name,year,dept,bid,subject,title,date);
								        printf("Book Issued Successfully.\n\n");
								        break;
							        }
							    }
									
							        if(found1!=0)
									{
										printf("records not found\n");
										break;
									}
						    }
					
			}
			if(found!=0)
				{
				printf("records not found\n");
				
				}
				fclose(fp);
				fclose(fp3);
				
				printf("\tpress <1> to continue with this section\n\tpress <2>to go Mainmenu\n\tpress any key to exit :");
	scanf("%d",&key);
	switch(key){
		case 1:
			bookissue();
			break;
		case 2:
			menu();
			break;
		default:
			exit(0);
			break;
	}
	
}
