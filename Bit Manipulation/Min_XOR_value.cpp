int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    
    int n = A.size();
    int min = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]^A[i+1]<min)
        min = A[i]^A[i+1];
    }
    
    return min;
}

