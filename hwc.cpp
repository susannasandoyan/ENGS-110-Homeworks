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

        printf ("Summary of all fibonacci numbers less than your age: %d", sum);
        return sum;
}
int Binary(int sum){
       
        int binary[32];
        int i = 0;
        while (sum > 0){
                binary[i] = sum % 2;
               sum = sum / 2;
                i++;
        }
        printf("\nBinary representation of the sum: ");
        for (int k = i-1; k>=0; k--){
                printf ("%d", binary[k]);
        }
        return binary[i];
}

int main(){
        printf ("Enter your age: ");
        scanf ("%d", &age);
        Binary(FibSum(age));
        printf ("\n");
        return age;
}

