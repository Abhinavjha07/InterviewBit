int Solution::solve(vector<int> &A) {
    int n = A.size();
    int max = INT_MIN;
    int chunk = 0;
    for(int i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
        
        if(max == i)
        chunk++;
    }
    
    return chunk;
}

