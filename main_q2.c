# include <stdio.h>
# include "tableau_q2.h"

int main(void)
{
	/*
	float tab[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i;
	float val = 0;
	float somme = 0;
	float moyenne;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &tab[i]);
		somme += tab[i];
	}
	moyenne = somme/10.0;
	printf("%f", moyenne);
	*/
	
	float tab[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int nbElement = 10;
	printf("%f", moyenne(tab, nbElement));
	return 0;
}
