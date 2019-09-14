int func(void);
int (*fp)(void) = &func;

void main(void)
{
	if(func())
	{
	}
}

int func(void)
{
	return 0;
}
 
