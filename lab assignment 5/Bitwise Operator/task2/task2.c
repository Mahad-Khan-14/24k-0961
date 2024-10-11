#include <stdio.h>
int main(){
    int n, i=0;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while (n != 0)
    {
        i=i+(n&1);
        n=n>>1;
    }
    printf("The number of 1's in the binary representation is: %d\n", i);

    return 0;
    
}