int Solution::uniquePaths(int A, int B) {
    int a[B];
    
    
    for(int i=0;i<B;i++)
    a[i]=0;
    a[0]=1;
    for(int i=0;i<A;i++)
    {
        for(int j=1;j<B;j++)
        a[j]+=a[j-1];
    }
    
    return a[B-1];
}

