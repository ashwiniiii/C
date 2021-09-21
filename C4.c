#include <stdio.h>

int main()
{
    printf(" Enter a salary of employee\n");
    int salary=0;
    scanf("%d", &salary);
    if(salary<10000)
    { 
        printf("%d ", salary+20000);
    }
    else
    {
        printf("%d ", salary+50000);
    }
    
    
    return 0;
}
