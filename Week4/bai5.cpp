int pageCount(int n, int p) {
    int dau = p/2;
    int cuoi = n/2 - p/2;
    
    return min (dau,cuoi);
}
