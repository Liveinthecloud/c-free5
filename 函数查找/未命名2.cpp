#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#define LEZ sizeof(struct Find)
typedef struct Find
{
	char funcname[10];
	char effect[80];
	struct Find *next;
};
int main()
{
	Find *head;
	Find *shuru();
	SetConsoleTitleA("�����洢");
	FILE *fp;
	if((fp=fopen("function.txt","ab"))==NULL)
	{
		printf("\n can not open function.\n");
		exit(1);
	}
	head=shuru();
	if((fwrite(head,LEZ,1,fp))!=NULL)
	{
		printf("\nerror!\n");
	}
	fclose(fp);
	return 0;
	
	
	
} 

Find *shuru()
{
	int flag=1;
	Find *p1,*p2,*Head;
	int n=0;
	p1=p2=(Find*)malloc(LEZ);
	gets(p1->funcname);
	gets(p1->effect);
	Head=NULL;
	while(flag)
	{
		n+=1;
		if(n==1)
		{
			printf("5");
			Head=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;printf("@");
			p1=(Find*)malloc(LEZ);
			printf("*");
			gets(p1->funcname);
			printf("&");
			gets(p1->effect);
		}
		scanf("%d",&flag);
		
	}
	p2->next=NULL;
	return Head;
	
} 