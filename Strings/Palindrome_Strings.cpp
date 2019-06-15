int Solution::isPalindrome(string A) {
    string B = "";
    for(int i=0;i<A.length();i++)
    {
        if(isalnum(A[i]))
        B+=tolower(A[i]);
    }
    // cout<<B<<endl;
    int i=0,j=B.length()-1,flag=0;
    while(i<=j)
    {
        if(B[i]!=B[j])
        {
            flag=1;
            break;
        }
        
        i++;
        j--;
    }
    
    if(flag==0)
    return 1;
    else
    return 0;
}

