string kangaroo(int x1, int v1, int x2, int v2) {
    int nho = x2,lon = x1,vnho = v2,vlon=v1;
    if(x1<x2) {nho = x1;lon = x2;vnho = v1;vlon = v2;}
    
    while(nho <= lon)
    {
        nho+=vnho;
        lon+=vlon;
        if(nho == lon) return "YES";
    }
    return "NO";
}
