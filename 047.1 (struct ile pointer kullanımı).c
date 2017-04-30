#include <stdio.h>
#include <string.h>

struct Futbolcu
{
	char ad [20];
	char takim [20];
	int yas;
};

int main()
{
	struct Futbolcu F1;	
	
	struct Futbolcu * F1ptr; 	//	struct Futbolcu * F1ptr = &F1; kodu da yazýlabilirdi.
	F1ptr = &F1;
		
	strcpy(F1ptr -> ad,"Raul");		//	strcpy(F1.ad,"Raul"); yazarsak pointer kullanmadan F1'in ad bilgisini doldururuz.
	strcpy(F1.takim,"REAL MADRID");
	F1ptr -> yas = 25;
	
	printf("Ad:	%s\n",F1ptr -> ad);
	printf("Takim:	%s\n",F1ptr -> takim);
	printf("Yas:	%d\n\n",F1.yas);
	
	struct Futbolcu F2 = {"Cambiasso","INTER",26};	
	struct Futbolcu * F2ptr = &F2; 
	
	printf("Ad:	%s\n",F2ptr -> ad);
	printf("Takim:	%s\n",F2.takim);
	printf("Yas:	%d\n\n",F2ptr -> yas);
}
