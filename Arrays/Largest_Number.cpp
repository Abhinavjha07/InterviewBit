int myCompare(string X, string Y) 
{ 
    string XY = X.append(Y); 

    string YX = Y.append(X); 

    return XY.compare(YX) > 0 ? 1: 0; 
} 
string Solution::largestNumber(const vector<int> &A) {
    
    string a[A.size()];
    int n = A.size();
    int c = 0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        c++;
        a[i] = to_string(A[i]);
    }
    
    sort(a,a+n,myCompare);
    string ans = "";
    for(int i=0;i<n;i++)
    ans += a[i];
    
    if(c==n)
    ans = "0";
    return ans;
}

