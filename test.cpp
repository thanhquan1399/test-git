#include <iostream>

int main(){
    printf("Hello World \n");
    int age = 23;
    int *ptr = &age;
    printf("%d \n",age);
    printf("%p \n",&age);
    printf("%d \n",*ptr);
    return 0;
}