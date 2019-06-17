vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0 && A[i]>=0)
        {
            int j = i+1;
            while(j<n && A[j]>=0)
            j++;
            
            if(j<n)
            {
            int temp = A[i];
            A[i] = A[j];
            int x = i+1;
            while(x<j+1)
            {
               int t = A[x];
               A[x] = temp;
               temp = t;
               x++;
            }
            
            }
        }
        
        else if(i%2!=0 && A[i]<0)
        {
            int j = i+1;
            while(j<n && A[j]<0)
            j++;
            
            if(j<n)
            {
            int temp = A[i];
            A[i] = A[j];
            int x = i+1;
            while(x<j+1)
            {
               int t = A[x];
               A[x] = temp;
               temp = t;
               x++;
            }
            }
        }
    }
    
    return A;
}

