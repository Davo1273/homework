#include <iostream>

int main()
{
int num1;
int num2;
int num3;
std::cout <<" Enter three number" << std::endl;
std::cin >> num1;
std::cin >> num2;
std::cin >> num3;
 if( num1 == num2 || num2 == num3 || num1 == num3)
{
    if(num1 >= num2 && num1 >= num3)
    {
        std::cout << num1;
    }
    else if(num2 >= num3)
   {
   	std::cout << num2;
   }

   else
   {
	std::cout << num3;
   } 
}
  else
{
  std::cout << "NOT FOUND" << std::endl;
}
return 0;
}
