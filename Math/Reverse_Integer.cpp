int Solution::reverse(int A) {
    int flag=0;
    
    if(A<=2147483647 && A>=-2147483647)
    {
    if(A<0)
    {
        flag=1;
        A = -A ;
    }
    
    long long b=0;
    while(A>0)
    {
        int x =A%10;
        b = b*10+x;
        if(b%2147483647 !=b)
        return 0;
        A/=10;
    }
    
    if(flag==1)
    return (-b);
    else
    return b;
    }
    else
    return 0;
}

