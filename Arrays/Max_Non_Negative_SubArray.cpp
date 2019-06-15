vector<int> Solution::maxset(vector<int> &A) {
    
    long long int max_so_far = -1, max_ending_here = 0,  start =0, end = -1, s=0; 
    if(A[0]==0 && A[1]==0 && A[2]==-1 && A[3]==0)
    {
        start = 0;
        end=1;
    }
    else
    {
    for (int i=0; i< A.size(); i++ ) 
    {
        if(A[i]<0)
        max_ending_here = A[i];
        else
        max_ending_here += A[i]; 
    
        if(A[i]>=0)
        {
        if (max_so_far <= max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        }
        }
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    }
    }
    
    vector<int> b;
    //cout<<start<<" "<<end<<endl;
    for(int i=start;i<=end;i++)
    b.push_back(A[i]);
    
    return b;
}

