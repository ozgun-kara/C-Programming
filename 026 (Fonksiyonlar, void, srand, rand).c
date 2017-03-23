#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mesaj()
{
	printf("ZAR ATILIYOR...\n");
}

void zar_at()
{
	srand(time(NULL));			// Farkli degerlerin çikmasi için yazilir.
	int deger = rand()%6 + 1;
	printf("Rastgele atilan zar sonucu: %d\n",deger);	
}

int main()
{
	mesaj();
	printf("\n");
	zar_at();		
}
