bool tennisSet(int score1, int score2) {
    if (score1 == score2)
        return false;
    
    int win = score1 > score2 ? score1 : score2;
    int loss = score1 < score2 ? score1 : score2;
    
    return (win == 6 && loss < 5) || (win == 7 && (loss == 5 || loss == 6));
}
