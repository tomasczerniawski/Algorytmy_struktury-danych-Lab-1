#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
  
int generacja()
{
    
    FILE* fptr;
  
    
    fptr = fopen("random.txt", "w"); 
    int i=0,n = 0;
    	srand(( unsigned )time(NULL));
    if (fptr == NULL) {
        printf("ERROR");
        return -1;
    }
else{
		printf("File created successfully!\n");
		
	}
do{

printf("Wprowadzenie n. Musi byc != 0 \n");
		scanf("%d", &n);
	} while (n <= 0);
int t;
	t = clock();

	while (i < n) {
		int j = 1 + rand() % 138573;
		printf("%d \n", j);
		fprintf(fptr, "%d\n", j);
		i = i + 1;
	}
    fclose(fptr); 
    printf("numbers generated successfully !! ");
    return 0;
}
