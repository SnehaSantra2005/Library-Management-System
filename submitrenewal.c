#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
void submitrenewal(){
	FILE *fp,*fp1,*fp2;
	int res,n;
	 int found=1;
	char stuid[10];
	char sid[10];
	char name[200],year[100],dept[100];
	char bid[10];
	char subject[200],title[100];
	char date[20],date3[20];
	char today[20];
	int finaldate,startdate,dif;
	int choice,key;
	int found2=1;
	printf("Enter Student's ID : ");
	scanf("%s",stuid);
	fp=fopen("bookissuerecord.txt","r");
	while(fscanf(fp,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date)!=EOF){
		res=strcmp(sid,stuid);
		if(res==0){
			found=0;
			printf("\tStudent ID : %s\n\tStudent Name : %s\n\tYear : %s\n\tDepartment : %s\n\tBook ID :  %s\n\tSubject :  %s\n\tBook Title : %s\n\tDate :  %s\n\n",sid,name,year,dept,bid,subject,title,date);
		}
	}
	if(found!=0){
				printf("record not found.\n");
				bookissue();		
			}
			fclose(fp);
	
			printf("press <1> to check fine : ");
			scanf("%d",&n);
				if(n==1){
					printf("Fine Will be Calculated 10 days previous from today\n");
					printf("--------------------------------------------------------\n");
					printf("Enter Today's date : ");
					scanf("%s",today);
					startdate=atoi(date);
					finaldate=atoi(today);
					dif=finaldate-startdate;
						if(dif>=10){
							printf("Fine : %d Rs.\n\n",dif-10);
									}
						else{
							printf("No Fine\n\n");
							}	
						}
						
			printf("press <1> to submit book\n");
			printf("press <2> to renewal book\n");
			printf("please enter your choice : ");
			scanf("%d",&choice);
			if(choice==1)
			{
				printf("Enter Student's ID : ");
				scanf("%s",stuid);
				fp=fopen("bookissuerecord.txt","r");
				fp1=fopen("temp1.txt","a");
				while(fscanf(fp,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date)!=EOF)
				{
					res=strcmp(sid,stuid);
					if(res==0)
					{
							found=0;
							printf("Student ID : %s\nStudent Name : %s\nYear : %s\nDepartment : %s\nBook ID :  %s\nSubject :  %s\nBook Title : %s\nDate :  %s\n\n",sid,name,year,dept,bid,subject,title,date);
							printf("Book submitted successfully\n");
							printf("record deleted successfully\n");						
					}
		else
		{
			fprintf(fp1,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date);
		}
			   }	
				if(found!=0)
				{
			printf("not found");
				}
			fclose(fp);
			fclose(fp1);
			fp=fopen("bookissuerecord.txt","w");
				fclose(fp);
			fp=fopen("bookissuerecord.txt","a");
			fp1=fopen("temp1.txt","r");	
			
			while(fscanf(fp1,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date)!=EOF)
				{
				fprintf(fp,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date);
				
				}
				fclose(fp);
				fclose(fp1);
				fp1=fopen("temp1.txt","w");
				fclose(fp1);
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
			
							
			else if(choice==2){
				fp=fopen("bookissuerecord.txt","r");
				fp1=fopen("temp2.txt","a");
				printf("Enter Student ID : ");
				scanf("%s",stuid);
				while(fscanf(fp,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date)!=EOF){
					res=strcmp(sid,stuid);
					if(res==0){
								found2=0;
							printf("Student ID : %s\nStudent Name : %s\nYear : %s\nDepartment : %s\nBook ID :  %s\nSubject :  %s\nBook Title : %s\nDate :  %s\n\n",sid,name,year,dept,bid,subject,title,date);
							printf("Enter New Date : ");
							scanf("%s",date3);
							fprintf(fp1,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date3);
							  }
							  else{
							fprintf(fp1,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date); 
								  }
					}
					if(found2!=0){
						printf("records not found.");
						
					}
					fclose(fp);
					fclose(fp1);
					fp=fopen("bookissuerecord.txt","w");
					fclose(fp);
					fp=fopen("bookissuerecord.txt","a");
					fp1=fopen("temp2.txt","r");
					while(fscanf(fp1,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date)!=EOF){
						fprintf(fp,"%s %s %s %s %s %s %s %s\n",sid,name,year,dept,bid,subject,title,date);
					}
					fclose(fp);
					fclose(fp1);
					fp=fopen("temp2.txt","w");
					fclose(fp);
					
				}
				else{
				bookissue();
			}
				printf("Book renewal successful.\n");
				printf("Record Updated.\n");
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
		 
		fclose(fp);


}
	
	
