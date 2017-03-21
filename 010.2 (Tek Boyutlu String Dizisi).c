#include <stdio.h>

int main()
{
	char isim [15];
	printf("Isim Giriniz:");
	scanf("%s",&isim);					// scanf("%s",isim); olarak da yazılabilir. Not: scanf, boşluğa kadar olan metni alır.	
	printf("%s \n",isim);
	char isim2 [8] = {'A','B','C',' ','D','E','F'}; 	// Metnin sonunda gizli bir '\0' NULL karakteri olduğu için dizi 8 boyutludur.
								// char isim2 [100] = {'A','B','C',' ','D','E','F'}; de yazılabilir.
	printf("%s \n",isim2);
	
	char isim3 [] = {'Z','i','d','a','n','e'};		// char isim3 [7] = {'Z','i','d','a','n','e'}; olarak da yazılabilir.
	char isim4 [] = {'P','i','r','l','o','\0'};		// char isim4 [6] = {'P','i','r','l','o','\0'}; olarak da yazılabilir.
	printf("%s \n",isim3);
	printf("%s \n",isim4);
}

