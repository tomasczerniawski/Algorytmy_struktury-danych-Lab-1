// Tomas Czerniawski student
// Znaleźć i skasować te same długie słowo w tekście.
// 2023-01-11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//Teraz tu kasuje slowa które powtazająsie i jest najdlusza zeby byloby to lub to nieudałosie zrobic

int main (void)
{
	char matrica[10][30], large[100];
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0, length;
 
	
 char str[] = " Eos repellat dolorem cumque consectetur consectetur";
	
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
	
	 length = i + 1;
	 
	  strcpy(large, matrica[0]); 
	  
	for (i = 0; i < k; i++)
	{
		int present = 0;
		for (l = 1; l < k + 1; l++)
		{
if (matrica[l][j] == '\0' || l == i )
			{
			     
				continue;
			}
 
			if (strcmp (matrica[i], matrica[l]) == 0 && strlen(large) < strlen(matrica[l])) { 
				matrica[l][j] = '\0';
				present = present + 1;
			}
			
		
		}
		if (present > 0 )	   
		{			     
		matrica[i][j] = '\0';   
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
