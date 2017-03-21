#include <stdio.h>

// NOT: String Dizilerin son elemaný '\0' yani NULL dur.
// Bu nedenle dizinin boyutu, metnin karakter boyutundan 1 fazladýr.

int main()
{
	char isim [] = "Tallica";		//	char isim [7] = "Tallica"; þeklinde yazýlamaz çünkü derleyici, metnin sonuna '\0'  
									//	þeklinde NULL karakteri atar. Bu nedenle, char isim [8] = "Tallica"; yazýlabilir.
	char isim2 [10];
	char isim3 [9] = "Ferrari";
	char isim4 [100] = "Audi";
	char isim5 [] = "BMW";			//	char isim5 [4] = "BMW"; de yazýlabilir.
	
	for(int i=0;i<7;i++)
	{
		printf("%c ",isim [i]);
	}
	
	printf("\n\n");
	
	for(int i=0;i<7;i++)
	{
		printf("%s\n",isim);	// printf("%s\n",isim[]); yazýlamaz.
	}		
}
