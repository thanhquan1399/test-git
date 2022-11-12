#include <istream>
#include <name.h>
int main()
{
    extern int age;
    extern int *ptr;
    printf("%d %p \n",age,ptr);
    return 0;
}