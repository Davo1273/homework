#include <iostream>
#include <string>
 int main()

 {

std::string name;
std::cout <<" Please enter your name" << std::endl;
std::cin >> name;
for (int i = 0; i < name.size(); i++)
{
if ( name[i] >= 97 && name[i] <= 122)
{
name[i]-=32;
 }
}
std::cout << name << std::endl;

return 0;
}
