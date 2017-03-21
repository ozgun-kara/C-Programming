#include <stdio.h>

int main()
{	
	int dizi1 [10];
	int dizi2 [] = {44,58,75,12};
	for (int i=0;i<10;i++)
	{
		dizi1[i]=i*i;		
	}
	
	for (int i=0;i<10;i++)
	{
		printf("Dizi1'in %d. indisin degeri = %d \n",i,dizi1[i]);		
	}	
	
	printf("\n");
	
	for (int i=0;i<4;i++)
	{
		printf("Dizi2'nin %d. indisin degeri = %d \n",i,dizi2[i]);		
	}	
}
