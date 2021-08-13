#include "libft.hpp"

int base_to_int(std::string str) {
    std::string base = "0123456789ABCDEF";
    int len = base.length(), val = 1, tot = 0;
    for (int i = len - 1; i >= 0; i--) {
        for (int j = 0; base[j]; j++) {
            if (base[j] == str[i])
                tot += val * j;
        }
        val *= len;
    }
    return tot;
}

/*
stoi(b, 0, 2);
string b in base 2 to int
*/
