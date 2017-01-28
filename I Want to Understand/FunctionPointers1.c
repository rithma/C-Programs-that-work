/*
http://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work
*/



#include <stdio.h>

int main()
{
    
    int addInt(int n, int m){
        return (n + m); 
    }
    
    int (*functionPtr)(int, int);
    
    functionPtr = &addInt;
    
    int sum = (*functionPtr)(2,3);
    
    
    printf("Sum is:%d \n", sum);

    return 0;
}

