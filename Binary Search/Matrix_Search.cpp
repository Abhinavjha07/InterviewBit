int Solution::searchMatrix(vector<vector<int> > &A, int B) 
{
    int l = 0,r = A[0].size()-1;
    int n = A.size();
    while(l<n && r>=0)
    {
        if(A[l][r] == B)
        return 1;
        else if(A[l][r]<B)
        l++;
        else if(A[l][r]>B)
        r--;
    }
    
    return 0;
  
}

