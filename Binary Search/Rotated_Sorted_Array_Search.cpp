int Solution::search(const vector<int> &A, int B) {
    int l = 0,r = A.size()-1;
    
    while(l<=r)
    {
        int m = (l+r)/2;
        if(A[m] == B)
        return m;
        else if(A[l]<=A[m])
        {
            if(B >= A[l] && B < A[m])
                r = m-1;
            else
                l = m+1;
        }
        else if(A[m]<=A[r])
        {
            if(B>A[m] && B<=A[r])
            l = m+1;
            else
            r = m-1;
        }
        
        
    }
    
    return -1;
}

