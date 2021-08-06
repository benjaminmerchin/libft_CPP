#include "libc.h"

int base_to_int(std::string str) {
    std::string base = "0123456789ABCDEF";
    int len = base.length();
    int val = len, tot = 0;
    for (int i = str.length()-1; i >= 0; i--) {
        for (int j = 0; base[j]; j++) {
            if (base[j] == str[i])
                tot += val * j;
        }
        val += len;
    }
    return tot;
}
