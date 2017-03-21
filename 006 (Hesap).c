#include <stdio.h>

int main()
{
	int vize,final;
	float nott;
		
	printf("Vize notunu giriniz:\n");
	scanf("%d",&vize);
	printf("Final notunu giriniz:\n");
	scanf("%d",&final);
	nott= (float)(vize*40/100 + final*60/100);
	
	if (nott<40)
		printf("Notunuz = FF");
	else if (40<=nott && nott<50)
		printf("Notunuz = FD");
	else if (50<=nott && nott<55)
		printf("Notunuz = DD");
	else if (55<=nott && nott<60)
		printf("Notunuz = DC");
	else if (60<=nott && nott<70)
		printf("Notunuz = CC");
	else if (70<=nott && nott<80)
		printf("Notunuz = CB");	
	else if (80<=nott && nott<85)
		printf("Notunuz = BB");	
	else if (85<=nott && nott<90)
		printf("Notunuz = BA");	
	else 
		printf("Notunuz = AA");		
}
