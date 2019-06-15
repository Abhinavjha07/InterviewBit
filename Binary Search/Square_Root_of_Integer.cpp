int Solution::sqrt(int A) {
    
    int l = 1,r=A/2;
    if(A==0 || A==1)
    return A;
    
    int ans = 0;
    while(l<=r)
    {
        long long int mid = (l+r)/2;
        if(mid*mid==A)
        return mid;
        
        if (mid*mid < A)  
        { 
            l = mid + 1; 
            ans = mid; 
        }  
        else  
            r = mid-1;
    }
    return ans;
}

