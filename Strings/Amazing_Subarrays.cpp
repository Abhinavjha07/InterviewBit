int Solution::solve(string A) {
    int ans = 0;
    for(int i=0;i<A.length();i++)
    {
        if(isalpha(A[i]) && (tolower(A[i]) == 'a' || tolower(A[i]) == 'e' || tolower(A[i]) == 'i' || tolower(A[i]) == 'o' || tolower(A[i]) == 'u' ))
        ans =( ans%10003 + (A.length()-i)%10003)%10003;
        
    }
    return ans%10003;
}

