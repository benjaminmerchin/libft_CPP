#include "libft.hpp"

std::string int_to_string(int num)
{
	std::string res="";
	int sign = (num < 0) ? -1 : 1;

	num = abs(num);
	while (num > 0)
	{
		res += char(num%10 + 48);
		num /= 10;
	}
	if (sign < 0)
		res += '-';
	for (unsigned long i = 0; i < res.length()/2; i++)
		std::swap(res[i], res[res.length() - i - 1]);
	return res;
}
