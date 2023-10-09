#include <iostream>
#include "middle.h"

using namespace std;

int itc_min_num(long long number) {
    if (number < 0)
        number *= -1;
    int minch = 9, a;
    while (number > 0) {
        a = number % 10;
        if (a < minch)
            minch = a;
        number /= 10;
    }
    return minch;
}

int itc_rev_num(long long number) {
    if (number < 0)
        number *= -1;
    int rev = 0;
    while(number != 0) {
        rev = rev * 10 + number % 10;
        number /= 10;
    }
    return rev;
}

int itc_null_count(long long number) {
    if (number < 0)
        number *= -1;
    int nuli = 0;
    while (number > 0) {
        if (number % 10 == 0)
            nuli++;
        number /= 10;
    }
    return nuli;
}

bool itc_mirror_num(long long number) {
    long long revnum = 0;
    long long a = number;
    while (a > 0) {
        revnum = revnum * 10 + a % 10;
        a /= 10;
    }
    if (revnum == number)
        return true;
    else
        return false;
}

int itc_mirror_count(long long number){

}
