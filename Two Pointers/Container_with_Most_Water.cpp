int Solution::maxArea(vector<int> &A) {
    
    int n = A.size();
    if(n<2)
    return 0;
    int l = 0,r = n-1;
    int ans = INT_MIN;
    while(l<r)
    {
        int area = min(A[l],A[r])*(r-l);
        
        ans = max(ans,area);
        if(A[l]<A[r])
        l++;
        else
        r--;
        
    }
    
    return ans;
}

