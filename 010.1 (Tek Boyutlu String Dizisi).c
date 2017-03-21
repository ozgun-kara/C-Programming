#include <stdio.h>

// NOT: String Dizilerin son elemanı '\0' yani NULL dur.
// Bu nedenle dizinin boyutu, metnin karakter boyutundan 1 fazladır.

int main()
{
	char isim [] = "Tallica";		//	char isim [7] = "Tallica"; şeklinde yazılamaz çünkü derleyici, metnin sonuna '\0'  
						//	şeklinde NULL karakteri atar. Bu nedenle, char isim [8] = "Tallica"; yazılabilir.
	char isim2 [10];
	char isim3 [9] = "Ferrari";
	char isim4 [100] = "Audi";
	char isim5 [] = "BMW";			//	char isim5 [4] = "BMW"; de yazılabilir.
	
	for(int i=0;i<7;i++)
	{
		printf("%c ",isim [i]);
	}
	
	printf("\n\n");
	
	for(int i=0;i<7;i++)
	{
		printf("%s\n",isim);		//	 printf("%s\n",isim[]); yazılamaz.
	}		
}
