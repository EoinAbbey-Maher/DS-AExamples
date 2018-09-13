#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <stack>

std::string Binary(int t_num)
{
	std::string str = "";
	std::stack<int> s;
	while(t_num > 0)
	{
		s.push(t_num % 2);
		t_num = t_num / 2;
	}

	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	return str;
}

void findLowerCase(std::string & t_str)
{
	

	std::cout << "numer of lower case Characters" << count << std::endl;
}

void main() {
	Binary(50);

	std::string str = "HelLo";

	int count = 0;

	std::for_each(std::begin(str),
		std::end(str),
		[&](char const & c)
	{
		if (c >= "a" && <= "z")
		{
			count++;
		}
	});


	findLowerCase(str);
	system("pause");
}