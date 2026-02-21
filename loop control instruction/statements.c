// #include<stdio.h>

// int main() {
//     for(int i=0;i<15;i++){
//         printf("i is %d\n",i);
//         if(i==3){
//             continue; //exit the iteration.
//         }
//         if(i==7){
//             break; //exit the loop.
//         }
        
//     }
//     return 0;
// }

//understood that position of printf() affects output.

#include<stdio.h>

int main() {
    for(int i=0;i<15;i++){
        if(i==3){
            continue; //exit the iteration.
        }
        if(i==7){
            break; //exit the loop.
        }
        printf("i is %d\n",i);
    }
    return 0;
}