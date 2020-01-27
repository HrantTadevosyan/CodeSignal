#include <iostream>

int phoneCall(int min1, int min2_10, int min11, int s) {
    int min = 0;
    int rem = s;
    
    min = s >= min1 ? min + 1 : min;
    rem -= min1;

    if (rem < min2_10)
        return min;

    const int min2r = min2_10 * 9;
    const int r = rem - min2r; 

    min = r > 0 ? min + 9 : min + rem / min2_10;
    rem -= (min - 1) * min2_10; 

    if (rem < min11 || min < 10)
        return min;
    min += rem / min11;

    return min;
}
