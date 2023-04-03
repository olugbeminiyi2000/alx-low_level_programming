#include <stdio.h>
#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int length_s = strlen(s);
	int length_a = strlen(accept);

	for (i = 0; i < length_s && s[i] != ','; i++)
	{
		for (j = 0; j < length_a; j++)
		{
			if (s[i] == accept[j])
                        {
				count = count + 1;
			}
			else
			{
				;
			}
		}
	}
	return (count);
}
