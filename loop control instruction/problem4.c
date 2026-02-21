//print n natural numbers in reverse order.


#include<stdio.h>

int main() {
    int i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    for(i;i;i--){ //since any non-zero value is true this condition runs till i=0.
        printf("%d\n",i);
    }
    return 0;
}