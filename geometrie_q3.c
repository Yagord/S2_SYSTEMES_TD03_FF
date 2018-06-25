# include <stdio.h>
# include "geometrie_q3.h"

struct Point gravite(struct Point tab[],int nbPoint)
{
		int i;
		float sommex=0;
		float sommey=0;
		struct Point centre;
		
		for(i = 0; i< nbPoint; i++)
		{
				sommex+=tab[i].x;
				sommey+=tab[i].y;
		}
		
		centre.x=sommex/nbPoint;
		centre.y=sommey/nbPoint;
		
		return centre;
}