
void main(void)
{
	char Tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char Resultat[10];
	char *pChar1 = Tab + 2;
	char* pChar2 = Resultat;
	*pChar2 = 'P';
	Resultat[3] = 'a' + Tab[0];
	pChar2 = Resultat + 6;
	*pChar2 = Resultat[3] + 19;
	*(pChar2 - *(pChar1 + 0)) = *pChar2 - 7;
	pChar2 = Resultat + 1;
	*pChar2 = pChar2[2];
	pChar2[1] = *(pChar2 + 3) + pChar1[3];
	Resultat[5] = pChar2[7] = 'a' + Tab[4];
	Resultat[7] = *(pChar2 + 1);
	pChar2[8] = Resultat[7] + 1;
}