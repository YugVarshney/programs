#include <stdio.h>
int main()
{
    int ly[4],t=0,x=0;
   
    for (int i = 0; i <=3; i++)
    {
        scanf("%d", &ly[i]);
    }
    for (int j = 0; j <=3; j++)
    {
        if (j%2==0)
        {t=ly[j]+t;}
        else x=ly[j]+x;
    }
    printf(" DIFFERENCE  is : %d", (t-x));
    return 0;
}
