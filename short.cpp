#include<stdio.h>

struct person{
    char flag;
    unsigned short age;
    int id;
    unsigned short height;
};

int main(){
    printf("%d\n",sizeof(struct person));
    return 0;
}