int Solution::cntBits(vector<int> &A) {
    
    long long int ans = 0;
    int mod = 1e9+7;
    for(int i=0;i<32;i++)
    {
        int num = (1<<i);
        long long int c = 0;
        for(int j=0;j<A.size();j++)
        {
            if(num&A[j])
            {
                c++;
            }
        }
        ans = (ans%mod + (((c%mod*(A.size()-c)%mod)%mod*2)%mod)%mod)%mod;
    }
    return ans%mod;
}

