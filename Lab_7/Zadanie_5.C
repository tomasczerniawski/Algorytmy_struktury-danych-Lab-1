// Tomas Czerniawski student
// Sprawdzic czy słowo jest anagram.
// 2023-01-11

#include <stdio.h>  
#include <string.h>  
int main ()  
{  
 
    char arr1[30], arr2[30];  
    int len1, len2, num, i, j, znaleziony = 0, Nie_znaleziony = 0;  
      
    printf (" Podaj pierwszy wyraz: ");  
    scanf ("%s", arr1);  
      
    printf (" Poaj drugi wyraz: ");  
    scanf ("%s", arr2);  
      
    
    len1 = strlen (arr1);  
    len2 = strlen (arr2);  
      
  
    if (len1 == len2)  
    {  
        num = len1;   
        for ( i = 0; i < num; i++)  
        {  
            znaleziony = 0;  
            for ( j = 0; j < num; j++)  
            {  
                  
                if (arr1[i] == arr2[j])  
                {  
                    znaleziony = 1;  
                    break;  
                }  
            }  
              
            if (znaleziony == 0)  
            {  
                Nie_znaleziony = 1;
                break;  
            }  
        }  
        if (Nie_znaleziony == 1)  
            printf (" \n Nie jest anagrama ");  
        else  
            printf (" \n Jest anagrama. ");     
    }  
    else  
        printf (" \n Dwa wyrazy musza byc tego samego rozmiaru zeby byli anagrama. ");  
          
    return 0;     
}  
