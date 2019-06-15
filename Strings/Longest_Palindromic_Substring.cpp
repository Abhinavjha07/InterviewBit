string Solution::longestPalindrome(string s) {    
    int m =1,n=s.length();
    string ans = "";
    if(n==1)
    ans = s;
    else
    {
        int start=0,end=0;
    for(int i=0;i<n;i++)
    {
        int j=0,k=0;
      if(i+1<n && s[i]==s[i+1])
      {
      j=i,k=i+1;
      while(j>=0 && k<n && s[j]==s[k])
      {
        j--;
        k++;
      }
      if(m<(k-j-1))
      {
          m = k-j-1;
          start = j+1;
          end = k-1;
      }
    }
    if(i-1>=0 && i+1<n && s[i-1]==s[i+1])
    {
      j=i-1,k=i+1;
      while(j>=0 & k<n & s[j]==s[k])
      {
        j--;
        k++;
      }
      if(m<(k-j-1))
      {
          m = k-j-1;
          start = j+1;
          end = k-1;
      }
    }

    }

    for(int i=start;i<=end;i++)
    ans+=s[i];
    }
    return ans;
}

