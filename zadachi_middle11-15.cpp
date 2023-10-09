#include <iostream>
#include "middle.h"

using namespace std;

int itc_second_max_num(long long number) {
    if(number < 10)
        return -1;
    int maxmum = INT_MIN, smaxnum = INT_MIN, a;
    while(number > 0) {
        a = number % 10;
        if(a > maxmum){
            smaxnum = maxmum;
            maxmum = a;
    }
        else if(a != maxmum && a > smaxnum){
            smaxnum = a;
        }
        number /= 10;
    }
    return smaxnum;
}

int itc_second_simple_max_num(long long number) {
    if (number < 10)
        return -1;
    int maxmum = number % 10;
    int smaxnum = -1;
    number /= 10;
    while (number > 0) {
        int a = number % 10;
        if (a > maxmum) {
            smaxnum = maxmum;
            maxmum = a;
        } else if (a > smaxnum && a < maxmum) {
            smaxnum = a;
        }
        number /= 10;
    }
    if (maxmum == smaxnum) {
        return -1;
    } else {
        return smaxnum;
    }
}

