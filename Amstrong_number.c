#include<stdio.h>
#include<conio.h>
int main()
{

    int s,e,sum = 0,x, y,dig;
    printf("Enter a starting  : \n");
     scanf("%d", &s);
     printf("Enter a  ending range : \n");
    scanf("%d", &e);
    for(int i= s ; i <= e;  i++)
    {
        sum = 0;
        x = i;
        y = i;
        while(y != 0)
        {
            dig =y % 10;
            sum = sum + (dig * dig*dig);
            y = y/ 10;
        }
        if (x == sum )
        {
            printf("\n %d" , x);
        }
      
    }
    // printf("Amstrong number are : %d",sum);
}