int Solution::gcd(int A, int B) {
    int m = 0 ;
    
    while(B>0)
    {
        m = A%B;
        A = B;
        B = m;
    }
    
    return A;
}

