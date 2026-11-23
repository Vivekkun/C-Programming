// easy way to print pascal triangle 
// using this formula : nCr+1 = nCr * ((n-r)/(r+1)) 

#include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=2 ; i<=x ; i++){
//         fact=fact*i;
//     }
//     return fact;   
// }

// int combination(int i , int j){
//     return factorial(i)/(factorial(j)*factorial(i-j));
// }
int main (){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
            for(int s=1 ; s<=n-i ; s++){
                printf(" ");
            }
            
            int first = 1;
            for(int j=0; j<=i ;j++){
                printf("%d ",first);
                first = first * (i-j)/(j+1);
            }
            printf("\n");
        }

    return 0;
}    

