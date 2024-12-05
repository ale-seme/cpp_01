#include <iostream>
/**
 * Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF
 */

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	const char	*stringPTR = str.c_str();
	std::string& stringREF = str;

	std::cout << "Memory address of the string variable: " << &str << std::endl;
	std::cout << "Memory address held by stringPTR: "<< static_cast<const void*>(stringPTR) << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	return (0);
}