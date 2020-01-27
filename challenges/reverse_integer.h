int reverseInteger(int x) {
    int reversed = 0;
    while (x != 0) {
        int r = x % 10;
        reversed = reversed * 10 + r;
        x /= 10;
    }
    
    return reversed;
}