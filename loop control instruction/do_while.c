#include<stdio.h>

int main() {
    int i=0;
    //executes atleast once
    do
    {
        printf("The value of i is %d\n",i);
        ++i;
    } while (i<-1);
    
    
    return 0;
}