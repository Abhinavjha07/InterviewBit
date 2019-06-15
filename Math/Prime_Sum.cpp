bool isprime(int n) 
{ 
    if (n <= 1) 
        return false; 

    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}

vector<int> Solution::primesum(int A) {
    
    vector<int>b;
   
    for (int i=0; i<A; i++) 
    { 
        if (isprime(i) && isprime(A-i)) 
        { 
            b.push_back(i);
            b.push_back(A-i);
            return b; 
        } 
    }
    
}

