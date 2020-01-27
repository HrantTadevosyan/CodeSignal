int maxMultiple(int divisor, int bound) {
    int r = bound % divisor;
    return bound - r;
}
