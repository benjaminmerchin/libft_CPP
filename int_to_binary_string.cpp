#include "libft.hpp"

std::string int_to_binary_string(int a)
{
	std::string b = "";
	int m = 1;
	for(int i = 0; i < 99; i++)
	{
		if((m&a) >= 1)
			b = "1"+b;
		else
			b = "0"+b;
		m<<=1;
	}
	return b;
}

/*
Shorter version with bitset library and fixed string size:

#include <bitset>
std::string s = std::bitset< 64 >( x ).to_string();
*/
