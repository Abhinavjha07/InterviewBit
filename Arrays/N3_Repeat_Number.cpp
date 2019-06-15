

    int Solution::repeatedNumber(const vector<int> &A) {
        int n = A.size();
        
        
        int c1=0,c2=0;
        int a,b;
        
        for(int i=0;i<n;i++)
        {
            if(a==A[i])
            {
                c1++;
               
            }
            else if(b==A[i])
            {
                c2++;
                
            }
            else if(c1==0)
            {
                a=A[i];
                c1++;
            }
            else if(c2==0)
            {
                b=A[i];
                c2++;
            }
            
            else
            {
                c1--;
                c2--;
            }
        }
        
        c1=0;
        c2=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]==a)
            c1++;
            else if(A[i]==b)
            c2++;
        }
        
        
        if(c1>n/3)
        return a;
        else if(c2>n/3)
        return b;
        
        return -1;
        
        
    }


