vector<int> Solution::plusOne(vector<int> &A) {
    
    
        int i = A.size()-1;
        int s =1;
        
        while(i >= 0 )
        {
            if(A[i]<9)
            {
                A[i]+=s;
                break;
            }
            else
            {
                A[i] = (A[i]+1)%10 ;
                i--;
            }
        }
        
       
        
        if(i==-1 && A[0]==0)
        {
           
          vector<int> B;
          B.push_back(1);
          for(int i=0;i<A.size();i++)
          B.push_back(A[i]);
          
          return B;
        }
        else if(A[0]==0)
        {
            vector<int> B;
          int i =0;
          while(A[i]==0)
          i++;
          for(;i<A.size();i++)
          B.push_back(A[i]);
          
          return B;
        }
        
        return A;
    
    
    
}

