vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    int n = A.size(),m = B.size();
    
    int x =0,y = 0;
    vector<int> ans;
    while(x<n && y<m)
    {
        if(A[x]==B[y])
        {
            ans.push_back(A[x]);
            x++;
            y++;
        }
        else if(A[x]<B[y])
        x++;
        else if(A[x]>B[y])
        y++;
    }
    return ans;
    
}

