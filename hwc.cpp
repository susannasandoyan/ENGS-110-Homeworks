#include <stdio.h>
int age = 0;
int FibSum(int age){ 
        int f1 = 0;
        int f2 = 1;
        int sum = 0;
        while (f2<=age){
                sum = sum + f2;
                int temp = f2;
                f2 = f1 + f2;
                f1 = temp;
        }        

        printf ("Summary of all fibonacci numbers less than your age: %d\n", sum);
        return sum;
}
void Binary(int sum){
       
        int binary = 0;
        printf("\nBinary representation of the sum:");
        for (int k = 31; k>=0; k--){
	(binary = sum>>k);
	if (binary & 1) 
	        printf ("1");
	else
		printf ("0");
        }
	printf ("\n");
}

int main(){
        printf ("Enter your age: ");
        scanf ("%d", &age);
        Binary(FibSum(age));
        printf ("\n");
        return age;
}

