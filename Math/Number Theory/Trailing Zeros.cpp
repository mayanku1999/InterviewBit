int Solution::trailingZeroes(int A) {
    int sum=0;
    while(A){
        sum+=A/5;
        A/=5;
    }
    return sum;
    
}
