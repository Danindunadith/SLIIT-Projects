#include<stdio.h>
int main(void)
{
	int qty,unprice,price,i;
	char name[30];
	char itemid[30];
	
	FILE*sale;
	sale=fopen("purchase.txt","w");
	
	for(i=0;i<5;i++)
	{
		printf("\Enter item code:");
		scanf("%s",&itemid);
		
		printf("\Enter item name:");
		scanf("%s",&name);
		
		printf("\Enter quantity:");
		scanf("%d",&qty);
		
		printf("\Enter price for 1kg:");
		scanf("%s",&unprice);
		
		printf("\nItem ID\tName\tQuantity(kg)\tPrice for 1kg");
		
		fprintf(sale,"\n%s\t%s\t%d\t%s");
		
	}
	return 0;
}
