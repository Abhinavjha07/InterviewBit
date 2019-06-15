vector<vector<int> > Solution::solve(int A) {
    
    int a[A][A];
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==j || j==0)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i-1][j-1]+a[i-1][j]; 
            }
            
           //cout<<a[i][j]<<" ";
        }
        //cout<<endl;

    }
    vector<vector<int>> ans(A);
    
    for(int i=0;i<A;i++)
    {
        ans[i] = vector<int>(i+1);
        for(int j=0;j<=i;j++)
        ans[i][j] = a[i][j];
    }
    
    return ans;
}

