int Solution::solve(vector<vector<int> > &A) {
    
    int n = A.size(),m =A[0].size();
    
    
    for(int i = n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(j+1<m)
            A[i][j] += A[i][j+1];
        }
        
    }
    
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j+1<n)
            A[j][i] += A[j+1][i];
        }
    }
    
    long long int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<A[i][j])
            max = A[i][j];
        }
    }
    
    return max;
}

