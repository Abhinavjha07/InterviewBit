string Solution::convertToTitle(int n) {
    string s=""; 
    int i = 0; 
  
    while (n>0) 
    { 
         
        int rem = n%26; 
  
       
        if (rem==0) 
        { 
            s+= 'Z'; 
            n = (n/26)-1; 
        } 
        else 
        { 
            s+= (rem-1) + 'A'; 
            n = n/26; 
        } 
    } 
     
  
    
    reverse(s.begin(), s.end()) ;
    
    return s;
}

