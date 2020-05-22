int Solution::isPalindrome(int n) {
    int m=n,c;
    int sum=0;
    for(;m>0;m/=10){
        c=m%10;
        sum=(sum*10)+c;
    }
    if(sum==n)
    return 1;
    else 
    return 0;
}
