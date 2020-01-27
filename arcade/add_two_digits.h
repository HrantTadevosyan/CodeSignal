int addTwoDigits(int n) {
    int r = n % 10;
    int ten = (n - r) / 10;

    return r + ten;
}