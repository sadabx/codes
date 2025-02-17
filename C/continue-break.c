#include <stdio.h>

int main()
{
	for (int i = 0; i < 15; i++)
	{
		if (i == 4)
		{
			continue; //skip this iteration now
		}

		if (i == 10)
		{
			break; //stop the code now
		}

		printf("i= %d\n", i);
	}
	return 0;
}