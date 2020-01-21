int candies(int n, int m) {
    int r = m % n;
    return m - r;
}