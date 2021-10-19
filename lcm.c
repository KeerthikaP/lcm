#include <stdio.h>
int lcm(int, int);
int main()
{
    int x, y, answer;
    int prime[100];
    printf("Enter two numbers to find lcm: ");
    scanf("%d%d", &x, &y);
    answer = lcm(x, y);
    printf("The LCM of two number %d and %d is %d\n", x, y,answer);
    return 0;
}
int lcm(int x, int y)
{ 
    static int common = 1;
 
    if (common % x == 0 && common % y == 0)
    {
        return common;
    }
    common++;
    lcm(x, y);
    return common;
}
