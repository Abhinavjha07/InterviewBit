

    void Solution::merge(vector<int> &A, vector<int> &B) {
        vector<int> c;
        int x=0,y =0;
        int n = A.size(),m = B.size();
        
        while(x<n && y<m)
        {
            if(A[x]<=B[y])
            {
            c.push_back(A[x]);
            x++;
            }
            else
            {
                c.push_back(B[y]);
                y++;
            }
        }
        
        while(x<n)
        {
            c.push_back(A[x]);
            x++;
        }
        while(y<m)
        {
            c.push_back(B[y]);
            y++;
        }
        
        A = c;
    }


