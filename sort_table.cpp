#include "libft.hpp"

void	sort_table(int n, int x[])
{
	for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (x[i] > x[j]) {
                std::swap(x[i],x[j]);
                i = 0;
            }
        }
    }
}
