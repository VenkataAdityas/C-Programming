//using do-while print first n natural numbers

//My first attempt
// #include<stdio.h>

// int main() {
//     int n,i=0;
//     printf("Enter the value of n:");
//     scanf("%d",&n);

//     do
//     {
//       printf("%d\n",i);
//       i++;
//     } while (i<n);
    
//     return 0;
// }

//MY second attempt
#include<stdio.h>

int main() {
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);

    do
    {
      printf("%d\n",i);
      i++;
    } while (i<=n);
    
    return 0;
}