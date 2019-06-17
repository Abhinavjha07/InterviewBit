int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    if(n==1)
    return 0;
    
    int x = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<=B)
        x++;
    }
    
    int s = 0;
    for(int i=0;i<x;i++)
    {
        if(A[i]>B)
        s++;
    }
    
    int ans = s;
    
    for(int i=0;i<n-x;i++)
    {
        if (A[i] > B) 
        s--;
        if (A[i+x] > B) 
        s++;
        
        ans = min(ans,s);
    }
    
    return ans;
}

