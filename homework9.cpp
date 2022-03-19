#include <iostream>
int main()
{
int num1;
int num2;
std::cout << "Enter first number" << std::endl;
std::cin >> num1;
std::cout << " enter second number" << std::endl;
std::cin >> num2;
if (num1 > num2)
{
std::cout << num1;
}
else if(num2 > num1)
{
std::cout <<num2;
}
else
{
std::cout << "numbers are equal"<< std::endl;
}
return 0;
}
