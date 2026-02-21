#include<stdio.h>

int main() {
    int i=5;
    //i++ is same as i=i+1
    // i gets printed first and then 1 is added through ++
    printf("The value of i is %d\n",i++); //after this i=6 
    printf("The value of i is %d\n",++i); //after this i=7
    // hence ++i and i++ both are different

    i+=5; //i=i+5
    printf("The value of i is %d",i);
    return 0;
}