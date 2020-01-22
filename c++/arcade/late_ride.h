int lateRide(int n) {
    int min = n % 60;
    int h = (n - min) / 60;

    int minDigit1 = min % 10;
    int minDigit2 = (min - minDigit1) / 10;

    int hDigit1 = h % 10;
    int hDigit2 = (h - hDigit1) / 10;

    return minDigit1 + minDigit2 + hDigit1 + hDigit2;
}
