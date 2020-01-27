int largestNumber(int n) {
    int res = 0;
    int pow = 1;
    const int max = 9;
    for (int i = 0; i < n; i++) {
        res += max * pow;
        pow *= 10;
    }

    return res;
}
