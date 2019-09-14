#include <stdlib.h>

void main(void)
{
	char *p;

	p = malloc(1024);

	if( p == NULL )
	{
		/* error */
	}
	else
	{
		*p = '\0';
	}
} 
