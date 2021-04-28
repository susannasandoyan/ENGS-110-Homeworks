#include <stdio.h>
int main(){
        int age ;
        printf ("Enter your age: ");
        scanf ("%d", &age );
        int f1 = 0;
        int f2 = 1;
        int sum = 0;
        while (f2<=age){
                sum = sum + f2;
                int temp = f2;
                f2 = f1 + f2;
                f1 = temp;
               
        }
	printf ("Summary of all fibonacci numbers less than your age: %d", sum);
        int binary[32];
        int i = 0;
        while (age > 0){
                binary[i] = age % 2;
               age = age / 2;
                i++;
        }
	printf("\nBinary representation of the age: ");
        for (int k = i-1; k>=0; k--){
                printf ("%d", binary[k]);
        }
	printf ("\n");
	return sum;
      
}


