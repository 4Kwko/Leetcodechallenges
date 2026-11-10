int mySqrt(int x) {
    uint total = 1, comparador = 0;
    uint i;
    for(i = 0;  comparador < x && x > 0; i++) {
        total = total + 2;
        comparador = comparador + total;
    }
    return i;
}
