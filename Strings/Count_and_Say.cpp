string Solution::countAndSay(int A) {
    
    if(A==1)
    return "1";
    else if(A==2)
    return "11";
    else
    {
        string ans = "11";
        
        for(int i=3;i<=A;i++)
        {
            ans += '$';
            string temp = "";
            int cnt = 1;
            for(int j=1;j<ans.length();j++)
            {
                if(ans[j]!=ans[j-1])
                {
                    temp += to_string(cnt) + ans[j-1];
                    cnt=1;
                }
                else
                cnt++;
            }
            
            ans = temp;
        }
        
        return ans;
    }
}

