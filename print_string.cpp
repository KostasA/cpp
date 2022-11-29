#include <iostream>

void print_comment(std::string_view comment)
{
	std::cout << comment << std::endl;
}



int main()
{
	std::string comment("Hello C++17");
	print_comment(comment);
	std::cout << "End!" << std::endl;
	return 0;
}
