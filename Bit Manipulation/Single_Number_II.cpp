int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;
    for(int i=0;i<32;i++)
    {
        int num=(1<<i);
        int sum = 0;
        for(int j=0;j<A.size();j++)
        {
            if(num&A[i])
            sum++;
        }
        
        if(sum%3!=0)
        ans|=num;
    }
    
    return ans;
}
