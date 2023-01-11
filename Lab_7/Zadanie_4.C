// Tomas Czerniawski student
// Wyprowadzić wszystkie nie powtarzające się słowa
// 2023-01-11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main (void)
{
	char matrica[1000][3000];
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0, length;
 
	
 char str[] = " Eos rem non ut aliquam corrupti. Dolore expedita laboriosam vel architecto eligendi. Illo dolor ut sequi. Et enim dolores totam. Ut vero iure. Omnis eveniet quidem neque tempora.";
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			matrica[k][j] = '\0';
			k ++;
			j = 0;
		}
		else
		{
			matrica[k][j] = str[i];
			j ++;
		}
	}
 
	matrica[k][j] = '\0';
 
	j = 0;
	
	 
	  
	for (i = 0; i < k; i++)
	{
		int present = 0;
		for (l = 1; l < k + 1; l++)
		{
if (matrica[l][j] == '\0' || l == i )
			{
			     
				continue;
			}
 
			if (strcmp (matrica[i], matrica[l]) == 0) { 
				matrica[l][j] = '\0';
				present = present + 1;
			}
			
		
		}
			
	
	}
 
	j = 0;
 
	for (i = 0; i < k + 1; i++)
	{
		if (matrica[i][j] == '\0')
			continue;
		else
			printf ("%s ", matrica[i]);
	}
 
	printf ("\n");
 
	return 0;
}
