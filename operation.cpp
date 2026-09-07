#include<stdio.h>

void printd(short x){
    unsigned short mask = 1 << 15;
    for(int i = 0; i < 16; i ++){
        if(x & mask){
            printf("1");
        }
        else{
            printf("0");
        }
        mask = mask >> 1;
    }
}

int main(){
    short examp = -21234;
    for(int i = 0; i < 16; i ++){
        printd(examp);
        printf("\n");
        examp = examp >> 1;
    }
}