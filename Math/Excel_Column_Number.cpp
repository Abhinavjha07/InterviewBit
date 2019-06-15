int Solution::titleToNumber(string A) {
    
    if(A.length()==1)
    return (int)(A[0]-'A')+1;
    
    else
    {
        long long int n = A.length();
        long long int ans = 0;
        for(long long int i=0;i<n;i++)
        {
            ans = ans *26 +(int)(A[i]-'A')+1;   
        }
        
        return ans;
        
        
    }
}

