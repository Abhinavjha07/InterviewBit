#define ll long long int
vector<int> Solution::repeatedNumber(const vector<int> &A) {
   
    ll n=A.size();
    ll sum=0;
    ll sumsq=0;
    for(ll i=0;i<n;i++)
    {
        sum+=(ll)A[i];
        sumsq+=((ll)A[i]*(ll)A[i]);
    }
    
    ll diff = (n*(n+1)/2)-sum;
    
    ll diff2 = ((n*(n+1)*(2*n+1))/6)-sumsq;
    
    ll sumi = diff2/diff;

    int repeated = (sumi-diff)/2;
    
    int missing = (diff+sumi)/2;
  
    vector<int> ans;
    
    ans.push_back(repeated);
    ans.push_back(missing);
    
    return ans;
   
    
}

