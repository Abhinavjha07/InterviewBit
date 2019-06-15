unsigned int Solution::reverse(unsigned int A) {
    unsigned int num=0;
    for (int i = 0; i < 32; i++) 
    { 
        if((A & (1 << i))) 
           num |= 1 << ((32 - 1) - i);   
    }
    return num;
}

