int helper (int n) {
    if (n <= 0)
        return 0;
    return n + helper(n - 1);
}

int shapeArea(int n) {
    if (n <= 1)
        return 1;
    
    int hv = (n - 1) * 4 + 1;
    int diagonal = helper(n - 2) * 4;
    
    return hv + diagonal;
}
