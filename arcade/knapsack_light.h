int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    if (maxW < weight1 && maxW < weight2)
        return 0;

    if (maxW >= weight1 + weight2)
        return value1 + value2;

    if (maxW >= weight1 && maxW >= weight2) 
      return value1 > value2 ? value1 : value2;
    
    return maxW >= weight1 ? value1 : value2;        
}
