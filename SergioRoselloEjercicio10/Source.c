#include<stdio.h>
main()
{
	int numero = 0;
	printf("Introduce un numero si quieres ver si es un numero bonito.\n");
	scanf("%i", &numero);
	if (numero % 5 == 0)
	{
		printf("%i Es un numero bonito", numero);
	}
	else if (numero % 2 != 0 && numero % 3 == 0)
	{
		printf("%i Es un numero bonito", numero);
	}
	else 		
		printf("%i No es un numero bonito", numero);


}