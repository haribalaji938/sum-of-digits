#include <stdio.h>
 
int sum (int);
 
int main()
{
    int num;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of digits is %d\n",sum(num));
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
