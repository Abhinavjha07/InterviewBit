

    int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
        int i=0,j=0,k=0;
        int a = A.size(),b = B.size(),c = C.size();
        int dif = INT_MAX;
        while(i<a && j<b&& k<c)
        {
            int x = min(A[i],min(B[j],C[k]));
            int y = max(A[i],max(B[j],C[k]));
            
            if(dif>(y-x))
            {
                dif = y-x;
            }
            
            if(x == A[i])
            i++;
            else if(x == B[j])
            j++;
            else k++;
        }
        return dif;
    }


