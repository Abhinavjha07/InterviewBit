int Solution::maxSubArray(const vector<int> &A) {
    
    int max1=-999999,max2 =0;
    
    for(int i=0;i<A.size();i++)
    {
        max2+=A[i];
        if(max1<max2)
        max1=max2;
        
        if(max2<0)
        max2=0;
    }
    
    return max1;
}

