int Solution::divide(int a, int b) {
   long long dividend = a,divisor = b; 
    if(dividend ==0  && divisor>0)
    return 0;
    else if(dividend>0 && divisor==0)
    return INT_MAX;
    int sign = (((dividend < 0) ^ (divisor < 0))) ? -1 : 1; 
dividend = abs(dividend); 
divisor = abs(divisor); 


long long quotient = 0, temp = 0; 

for (int i = 31; i >= 0; --i) 
{ 

    if (temp + (divisor << i) <= dividend) 
    { 
    temp += divisor << i; 
    quotient |= 1LL << i; 
    } 
} 
if(sign*quotient>INT_MAX)
return INT_MAX;
return sign * quotient;
}

