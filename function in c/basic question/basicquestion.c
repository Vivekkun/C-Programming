#include<stdio.h> 

void england(){
    printf("you are in england\n");
    return;
}

void australia(){
    printf("you are in australia\n");
    england(); // calling function england
    return ;
}

void india(){
    printf("you are in india\n");
    australia(); // calling function australia
    return;
}

int main(){
    india(); // calling function india
    australia(); // calling function australia
    england(); // calling function england
    return ;
}



/* note : function defination is written above the function calling otherwise 
we need to define function prototype */