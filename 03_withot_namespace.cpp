#include<iostream>
int main()
{
  int num1,num2,sum;
  std::cout<<"enter two number : ";
  std::cin>>num1>>num2;
  sum=num1+num2;
  std::cout<<"num1 value : "<<num1<<std::endl;
  std::cout<<"num2 value : "<<num2<<std::endl;
  std::cout<<"sum of "<<num1<<" and "<<num2<<" = "<<sum;
  return 0;
}