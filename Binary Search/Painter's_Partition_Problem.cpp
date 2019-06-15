int n_painters(vector<int> A,int m)
{
    int n = A.size(),sum = A[0],c = 1;
    for(int i = 1;i<n;i++)
    {
        if((sum+A[i])>m)
        {
            c++;
            sum = A[i];
        }
        else
        {
            sum+=A[i];
        }
    }
    
    return c;
}


int Solution::paint(int K, int T, vector<int> &A) 
{
    int l=INT_MIN,r=0;
    int n = A.size();
    for(int i = 0;i<n;i++)
    {
        l = max(l,A[i]);
        r += A[i];
    }
    
    long long int ans = INT_MAX;
    while(l<=r)
    {
        long long int m = (l+r)/2;
        int x = n_painters(A,m);
        if(x <= K)
        {
            ans = min(ans,m)%10000003;
            r = m-1;
        }
        else
        l = m+1;
    }
    
    return (ans%10000003 * T%10000003)%10000003;
    
}

