#include<stdio.h>
int fact(int a)
{
     if(a == 1)
    {
        return 1;
    }
    else{
        return (a*fact(a-1));
    }
}

int main()
{
int k,l,m,n,r;
printf("Enter total number of items/ objects : \n");
scanf("%d",&n);
printf("Enter the value of total groups you need : \n");
scanf("%d", &r);
// The combination of n and r values inputed from the user.
//  Now we need to find the factorial of n as  per the formula nCr = n!/r!(n-r)!.For this we call common function factorial.
// We store the value of n! in k.
k = fact(n);
// We store the value of r! in l.
l = fact(r);
// We store the value of (n-r)! in m.
m = fact(n-r);
printf("the output of given of combination is = %d \n", (k/(l*m)));
}