#include <stdio.h>

int main()
{	
	int sayi=0;
	etiket:
	sayi=sayi+1;
	printf("%d\n",sayi);
	
	if (sayi<20)
		goto etiket;	
}
