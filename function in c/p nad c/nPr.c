// find nPr = n! / (n-r)! 

#include <stdio.h>
int factorial(int x){
    int fact = 1 ;
    for (int i=2 ; i<=x ; i++){
        fact = fact * i;
    }
    return fact;
}

int permutation(int n , int r){
    return factorial(n)/factorial(n-r);
}

int main(){
    int n, r;
    printf("enter n=");
    scanf("%d",&n);
    printf("enter r=");
    scanf("%d",&r);
    if(n<0 || r<0 || n < r){
        printf("invalid input");
    }
    else{
        int nPr = permutation (n,r);
        printf("nPr = %d",nPr);
    }
    return 0;

}
