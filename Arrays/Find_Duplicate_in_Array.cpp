int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int i,xor1=0;
    for(i=0;i<n;i++)
    {
        xor1^=A[i];
        xor1^=i;
    }
    return xor1;
}

