#include<iostream>
using namespace std;
void rev()
{
  int num,rem,rev=0;
  cout<<"enter a number : ";
  cin>>num;
  while(num)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  cout<<"revesre number : "<<rev<<endl;
}
void digi_cout(int num)
{
  int c=0;
  while(num)
  {
   c++;
   num=num/10;
  }
  cout<<"count : "<<c<<endl;
}
int is_prime(int num)
{
  int i;
  if(num==0 || num==1)
  return false;
  for(i=2;i<num;i++)
  {
    if(num%i==0)
    return false;
  }
  return true;
}
void range_prime(int s,int e)
{
     int i;
     for(i=s;i<=e;i++)
     {
      if(is_prime(i))
      printf("%d ",i);
     }
}
int add()
{
  int a=12,b=5;
  return (a+b);
}
int main()
{
  cout<<"sum = "<<add()<<endl;
  rev();
  digi_cout(456);
  range_prime(1,100);
  return 0;
}