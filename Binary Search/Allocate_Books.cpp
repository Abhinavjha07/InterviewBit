int possible(vector<int> A,int p,int m)
{
    int x = 1;
    int s = A[0],n = A.size();
    if(s>p)
    return 0;
    for(int i=1;i<n;i++)
    {
        if(A[i]>p)
        return 0;
        if((s+A[i])>p)
        {
            x++;
            s = A[i];
            if(x>m)
                return 0;
        }
        else
        s += A[i];
        
        
    }
    
    return 1;
    
}



int Solution::books(vector<int> &A, int B) {
    int l = INT_MIN,h = 0;
    
    int n = A.size();
    if (n < B) 
		return -1;
    for(int i = 0;i<n;i++)
    {
        l = max(l,A[i]);
        h += A[i];
    }
    int ans = h;
    while(l<=h)
    {
        int m = (l+h)/2;
        
        if(possible(A,m,B))
        {
            
            h = m-1;
            ans = min(ans,m);
        }
        else
        l = m+1;
    }
    
    return ans;
    
}

