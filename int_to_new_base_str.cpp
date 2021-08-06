#include "libft.hpp"

std::string b;

std::string int_to_new_base_str(long long a)
{
    std::string base = "0123456789abcdef";
    int len = base.length();
	if (a >= len) {
        int_to_new_base_str(a/len);
    }
    b+=base[a%len];
	return b;
}

/*
Shorter version with bitset library and fixed string size:

#include <bitset>
std::string s = std::bitset< 64 >( x ).to_string();
*/
