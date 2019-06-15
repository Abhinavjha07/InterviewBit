int Solution::isPalindrome(int A) {
    
    string s ="";
    
    if(A<0)
    return 0;
    
    else
    {
    while(A>0)
    {
        int m = A%10;
        s+=to_string(m);
        A/=10;
    }
    
    
    
    int l = 0,r = s.length()-1;
    while(l<r)
    {
        if(s[l]!=s[r])
        return 0;
        l++;
        r--;
    }
    
    return 1;
    }
}

