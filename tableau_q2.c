# include <stdio.h>

float moyenne(float tab[], int nbElement)
{
	int i;
	float somme = 0;
	float moyenne;
	
	for (i = 0; i < nbElement; i++)
	{
		somme += tab[i];
	}
	moyenne = (float) somme/nbElement;
	return moyenne;
}