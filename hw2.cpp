#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;
	FILE *fptr;
	fptr = fopen("data.txt", "r");
	int *ptr;
	ptr = (int*)malloc(100*sizeof(int));
	if (fptr == NULL){
		printf("There is a problem opening the file");
		exit(1);
	}
	while( fscanf(fptr, "%d", ptr)!=EOF){
		sum=sum+ *ptr;
	}
	printf("The sum is %d\n",sum);
	fclose(fptr);
	return 0;
	

}
