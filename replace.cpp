#include <iostream>

#include <string>

void replaceAll(std::string &, const std::string &, const std::string &); 

int main()
{
	std::string str = "Hello, world";
	
	replaceAll(str, "l", "ch");

	std::cout << str << std::endl;
	
	return 0;

}
void replaceAll(std::string & str, const std::string & from, const std::string & to)

{	
	if(str.empty())
	{
	
		return;
	}
	size_t pos = 0;

	while((pos = str.find(from, pos)) != std::string::npos)
	{
		str.substr(pos, to.size());
		pos += to.size();
	
		//std::cout << pos << std::endl;
	}

}
