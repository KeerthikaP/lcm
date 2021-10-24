#include <stdio.h>
int lcm(int, int);
int main()
{
    int x, y, answer;
    int prime[100];
    printf("INPUT FIRST NUMBER: ");
    scanf("%d", &x);
    printf("INPUT SECOND NUMBER: ");
    scanf("%d",&y);
    answer = lcm(x, y);
    printf("LCM of two number %d and %d = %d\n", x, y,answer);
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
