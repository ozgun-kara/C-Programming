#include <stdio.h>
#include <string.h>

main()
{	
	char ad [] = "zidane";
	int uzunluk = strlen(ad);
	
	printf("%s ismi %d karakterden olusur\n",ad,uzunluk);
	printf("%d\n",strlen(ad));
	printf("%d\n",strlen("Ali"));
	printf("%s\n",strrev(ad));				// Ters Yazma
}
