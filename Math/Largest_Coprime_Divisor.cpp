int gcd(int x,int y)
{
    while(y>0)
    {
        int m = x%y;
        x = y;
        y = m;
    }
    
    return x;
}

int Solution::cpFact(int x, int y) {
    while (gcd(x, y) != 1) { 
        x = x / gcd(x, y); 
    } 
    return x; 
}

