bool isInfiniteProcess(int a, int b) {
    if (a == b)
        return false;
    if (b < a)
        return true;
    
    while (a != b) {
        a++;
        b--;
        
        if (a > b)
            return true;
    }
    
    return false;
}
