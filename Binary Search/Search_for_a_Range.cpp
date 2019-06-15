vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int upper = upper_bound(A.begin(), A.end(), B)-A.begin(); 
    int lower = lower_bound(A.begin(), A.end(), B)-A.begin();
    vector<int> ans;
    if(A[upper-1] == B && A[lower]==B)
    {
    ans.push_back(lower);
    ans.push_back(upper-1);
    
    }
    else
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    
    return ans;
    
}

