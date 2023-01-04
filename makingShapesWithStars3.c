#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

int i,j,number;
srand(time(NULL));

number = 1 + rand()%20;

for(i=1;i<=number;i++){

    for(j=number;j>i;j--){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}

for(i=1;i<=number;i++){

    for(j=1;j<=i;j++){
        printf(" ");
    }
    for(j=number;j>i;j--){
        printf("* ");
    }
    printf("\n");
}

return 0;
}