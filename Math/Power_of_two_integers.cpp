int Solution::isPower(int A) {
    if (A <= 1) return true; 

    for (int x=2; x<=sqrt(A); x++) 
    { 
        unsigned  p = x; 
  
        
        while (p <= A) 
        {
            p *= x; 
            if (p == A) 
                return true; 
        } 
    } 
    return false;
}

