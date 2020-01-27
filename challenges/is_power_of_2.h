bool isPowerOfTwo2(long long n) {
    while(n % 2 == 0)
        n /= 2;
    if (n == 1)
        return true;
    return false;
}
