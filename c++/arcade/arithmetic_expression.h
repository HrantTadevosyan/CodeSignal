bool arithmeticExpression(int a, int b, int c) {
    double da =  static_cast<double>(a);
    double db =  static_cast<double>(b);
    double dc =  static_cast<double>(c);
    
    return da + db == dc || 
           da - db == dc ||
           da * db == dc || 
           da / db == dc;
}
