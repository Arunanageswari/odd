#include<conio.h>
void main()
{
    int n, i, sum = 0;
    scanf("%d",&n);
    for(i=1; i <= n; ++i)
    {
        sum += i; 
    }

    printf("Sum = %d",sum);
}
