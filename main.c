include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the value a");
    scanf("%d",&a);
    printf("enter the value b");
    scanf("%d",&b);
    addition(a,b);
    subtraction(a,b);
    division(a,b);
    multiplies(a,b);
    modules(a,b);
    increment(a,b);
    decrement(a,b);
    logical(a,b);
    return 0;
}
int addition(int a,int b)
{
    int c=a+b;
    printf("\n added value of a+b:%d\n",c);
}
int subtraction(int a,int b)
{
    int c=a-b;
    printf("\n sub value of a-b:%d\n",c);
}
int division(int a, int b)
{
    float c;
    c=(float)a/b;
    printf("\n division value of a/b:%f\n",c);
}
int multiplies(int a,int b)
{
    int c=a*b;
    printf("\n multiple value of a*b:%d\n",c);
}
int modules(int a,int b)
{
    int c=a%b;
    printf("\n modules value of a%b:%d\n",c);
}
int increment(int a)
{
  while(a<20)
  {
      printf("\n increment value of a:%d\n",a);
      a++;
  }
}
int decrement(int a)
{
    while(a>10)
    {
        printf("\n decrement value of a:%d\n",a);
        a--;
    }
}


