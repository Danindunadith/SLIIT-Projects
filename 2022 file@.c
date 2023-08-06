#include<stdio.h>
int main(void)
{
	int i,num;
	char name[30];
	
	FILE*phone;
	
	phone=fopen("Directorry.dat","w");
	
	
	for(i=1;i<5;i++)
	{
	printf("\nEnter name:");
	scanf("%s",&name);
	
	printf("\nEnter number:");
	scanf("%d",&num);
	
	fprintf(phone,"\n%s\t%d",name,num);
	
    }
    
    fclose(phone);
    
    phone=fopen("Directorry.dat","r");
    
    fscanf(phone,"%s\t%d",&name,&num);
    
}
