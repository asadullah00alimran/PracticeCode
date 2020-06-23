#include<stdio.h>
int sum(int a ,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a -b;
}
int mul(int a,int b)
{
    return a*b;
}

int main()
{
    int a,b,result;

    printf("enter two integers :");
    scanf("%d%d",&a,&b);

    result = sum(a,b);
    printf("%d\n",result);

     result = sub(a,b);
    printf("%d\n",result);

     result = mul(a,b);
    printf("%d\n",result);

     result = sum(a,b);
    printf("%d\n",result);

     result = sum(a,b);
    printf("%d\n",result);

     result = sub(a,b);
    printf("%d\n",result);

     result = mul(a,b);
    printf("%d\n",result);
}
