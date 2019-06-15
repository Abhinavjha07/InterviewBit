int Solution::pow(int x, int n, int d) {
    long long int res = 1,a,b;
  
    a = x % d; 
    b = n;
    while (b>0) 
    { 
        
        if (b & 1) 
            res = (res%d*a%d) % d; 
  
        b = b>>1;
        a = (a%d*a%d) % d;   
    }
    if(res<0)
        return d+res;
    return res%d; 
}

