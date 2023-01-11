# Zadanie 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int liczy_liczby(char *s);

int main(void)
{
    char s[] = "orange Invest32r Function47li6899 Ma68ager Vista 18avings Granite p74yment Pl39ins L48censed stable synergistic cultivate Account Executive Syn11rgized Money IB auxiliary system pro79ess";
    int result = liczy_liczby(s);
    
    printf("liczb jest : %d\n", result);
    return 0;
    
}

int liczy_liczby(char *s)
{
    int length = strlen(s);
    int count = 0;
    
    for (int i = 0; i < length; i++)
    
        if(isdigit(s[i])) count++;
        
        return count;
        
    
}
