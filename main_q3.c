# include <stdio.h>
# include "geometrie_q3.h"

int main(void)
{
	struct Point p[] = {{0,0},{1,0},{0,1}};
	struct Point centre = {0,0};
	
	centre = gravite(p,3);
	printf("x : %f y : %f",centre.x,centre.y);
	return 0;
}
