#include <stdio.h>
void dosum(int a,int b)
{
  int result;
  result=a+b;
  printf("%d\n",result);
}
void dosub(int a,int b)
{
  int result;
  result=a-b;
  printf("%d\n",result);
  
}
int main()
{
    dosum(20,30);
    dosum(40,50);
    dosub(30,10);
    dosub(40,20);
    dosum(50,10);
    dosub(90,50);
    return 0;
}