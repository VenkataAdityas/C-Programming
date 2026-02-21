//problem: write a program to print natural numbers from 10 to 20 when loop counter is initialised to zero.

// My attempt in trying to solve.(1)

// #include<stdio.h>

// int main() {
//     int i=0;
//     if(i<10){
//         i=i+1;
//     }
//     if(i==10){
//         while(i<21){
//             printf("The value of i is %d\n",i);
//             i=i+1;
//         }
//     }
    
//     return 0;
// }


#include<stdio.h>

int main() {
    int i=0;
    //using if statement inside while loop and adding i.
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d\n",i);
        }
    i=i+1;
    }
    return 0;
}