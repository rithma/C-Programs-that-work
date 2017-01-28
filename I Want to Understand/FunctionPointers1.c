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

/*
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
 
int main()
{ 
    void (*fun_ptr)(int) = fun;  // & removed
 
    fun_ptr(10);  // * removed
 
    return 0;
}


*/

