#include <stdio.h>

int main()
{
	int i=5, j=10;
	int * ip, * jp;
	ip = &i;
	printf("%p \n",ip);
	printf("%p \n",jp);
	jp = ip;			//	i'nin adresini tutan ip, jp'ye e�itlendi. Yani jp art�k i'nin adresini tutuyor ip gibi.
	printf("%p \n",ip);
	printf("%p \n",jp);
	printf("%d \n",*jp);
	printf("i = %d, j = %d \n",i,j);	
}
