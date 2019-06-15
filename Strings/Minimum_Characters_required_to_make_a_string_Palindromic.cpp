bool ispalindrome(string s) 
{ 
    int l = s.length(); 
    int j; 
      
    for(int i = 0, j = l - 1; i <= j; i++, j--) 
    { 
        if(s[i] != s[j]) 
            return false; 
    } 
    return true;
} 
int Solution::solve(string s) {
    int cnt = 0,flag=0;
    while(s.length()>0) 
    { 
        cout<<s<<endl;
        if(ispalindrome(s))
        { 
            flag = 1; 
             break;
        } 
        else
        { 
        cnt++; 
        s.erase(s.begin() + s.length() - 1); 
        } 
    } 
    
    return cnt;
    
}

