//fazer uma forca com 5 chances.
//Nome do programador:Breno Werlang
//Data:30/04/2022
#include <stdio.h>
int main (void)
{
	char letra;
	int a;
	a=1;
	
	
	
	printf("de uma letra\n");
		scanf("%c",&letra);
	fflush(stdin);
	
	while(letra!='s')
	{
		printf("Deu errado\n");
		a++;
		
		printf("Tente de novo\n");
		scanf("%c",&letra);
		fflush(stdin);
		
		if(a>4)
	{
			printf("Perdeu");
			return 0;
	}
		
	}
	printf("Parabens voce acertou\n");

	
return 0;	
}
