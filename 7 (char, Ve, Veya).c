#include <stdio.h>

int main()
{
	char tus;	
	printf("Bir tusa basiniz:\n");
	scanf("%c",&tus);
	if ((65<=tus && tus<=90) || (97<=tus && tus<=122))
		printf("Harfe bastiniz\n");
	else
		printf("Harfe basmadiniz\n");	
}
