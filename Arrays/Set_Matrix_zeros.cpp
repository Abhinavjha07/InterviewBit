void Solution::setZeroes(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    bool row = false; 
    bool col = false; 
  
    
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            if (i == 0 && A[i][j] == 0) 
                row = true; 
  
            if (j == 0 && A[i][j] == 0) 
                col = true; 
  
            if (A[i][j] == 0) { 
  
                A[0][j] = 0; 
                A[i][0] = 0; 
            } 
        } 
    } 

    for (int i = 1; i < n; i++) { 
        for (int j = 1; j < m; j++) { 
  
            if (A[0][j] == 0 || A[i][0] == 0) { 
                A[i][j] = 0; 
            } 
        } 
    } 
  
     
    if (row == true) { 
        for (int i = 0; i < m; i++) { 
            A[0][i] = 0; 
        } 
    } 

    if (col == true) { 
        for (int i = 0; i < n; i++) { 
            A[i][0] = 0; 
        } 
    } 
    
    
}

