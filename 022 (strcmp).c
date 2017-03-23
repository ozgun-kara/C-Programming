#include <stdio.h>
#include <string.h>

int main()
{	
	char kullanici [] = "Zidane", sifre [] = "abc123";
	char k_adi [15] , sfre[10];
	
	printf("Kullanici adinizi giriniz:\n");
	scanf("%s",&k_adi);	
	
	if (strcmp(kullanici,k_adi)==0)
	{
		printf("Sifrenizi giriniz:\n");
		scanf("%s",&sfre);
		if (strcmp(sifre,sfre)==0)
		{
			printf("--- Merhaba giris basarili ---\n");
		}
		else 
			printf("Sifre hatali!\n");		
	}
	else
		printf("Kullanici adi hatali!\n");
}
