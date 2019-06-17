int Solution::threeSumClosest(vector<int> &A, int B) {
    
    sort(A.begin(),A.end());
    int n = A.size();
    for(int i=0;i<n-2;i++)
    {
        l = i + 1; 
        
  
        r = arr_size - 1; 
        while (l < r) { 
            if (A[i] + A[l] + A[r] == sum) { 
                
                return true; 
            } 
            else if (A[i] + A[l] + A[r] < sum) 
                l++; 
            else  
                r--; 
        } 
    }
}

