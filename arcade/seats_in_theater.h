int seatsInTheater(int nCols, int nRows, int col, int row) {
    int c = nCols - col + 1;
    int r = nRows - row;
    return c * r;
}