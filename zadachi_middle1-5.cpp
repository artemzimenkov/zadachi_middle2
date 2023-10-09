#include <iostream>
#include "middle.h"

using namespace std;

void itc_num_print(int number){
    cout << number;
}

int itc_len_num(long long number){
    if (number < 0)
        number = number * (-1);
    else if (number == 0)
        return 1;
    int i = 0;
    while(number > 0){
        number /= 10;
        i++;
    }
return i;
}

int itc_sum_num(long long number){
    if (number < 0)
        number *= -1;
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

long long itc_multi_num(long long number){
    if (number == 0)
        return 0;
    else if (number < 0)
        number = number * (-1);
    int i, a = 1;
    while (number > 0){
        i = number % 10;
        a *= i;
        number /= 10;
    }
    return a;
}

int itc_max_num(long long number){
    if (number == 0)
        return 0;
    else if (number < 0)
        number = number * (-1);
    int i, a = 0;
    while (number > 0){
        i = number % 10;
        if (i > a)
            a = i;
        number /= 10;
    }
    return a;
}
