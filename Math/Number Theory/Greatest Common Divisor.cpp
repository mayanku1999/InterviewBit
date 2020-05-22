int f(int a,int b){
    if(b==0)return a;
     return f(b,a%b);
}

int Solution::gcd(int a, int b) {
   return f(a,b);
}
