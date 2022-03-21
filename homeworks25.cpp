#include <iostream>
#include <string>

int main()
{
std::string name;
std::cout << " please enter your name" << std::endl;
std::cin >> name ;
 for ( int i=name.size()-1; i >= 0; --i)
{

	std::cout << name[i];


}
return 0;
}
