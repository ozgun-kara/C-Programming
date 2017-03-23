#include <stdio.h>
#include <string.h>

int main()
{
	char isim1 [10] = "Zidane";
	char isim2 [10];
	strcpy(isim2,isim1);			// isim1 i isim2'ye atar.
	printf("isim2 = %s",isim2);
}
