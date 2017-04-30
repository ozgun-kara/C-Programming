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
		
	strcpy(F1.ad,"Zidane");
	strcpy(F1.takim,"JUVENTUS");
	F1.yas = 27;
	
	printf("Ad:	%s\n",F1.ad);
	printf("Takim:	%s\n",F1.takim);
	printf("Yas:	%d\n\n",F1.yas);
	
	struct Futbolcu * F1ptr; 	//	struct Futbolcu * F1ptr = &F1; kodu da yazýlabilirdi.
	F1ptr = &F1;
		
	//	NOT: Bir struct yapýsýnýn pointer'ý, yine ayný nesne tipinde bir struct olmak zorundadýr.		
	printf("Ad:	%s\n",(*F1ptr).ad);
	printf("Takim:	%s\n",(*F1ptr).takim);
	printf("Yas:	%d\n\n",(*F1ptr).yas);
	
	// NOT: Genel olarak yukarýdaki yazým yerine aþaðýdaki yazým þekli kullanýlýr.
	printf("Ad:	%s\n",F1ptr -> ad);
	printf("Takim:	%s\n",F1ptr -> takim);
	printf("Yas:	%d\n\n",F1ptr -> yas);
}
