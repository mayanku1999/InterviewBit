
bool isprime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
        
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int>ans ;
    for(int i=2;i<=A;i++){
        if(isprime(i) && isprime(A-i)){ans.push_back(i);ans.push_back(A-i);break;}
    }
    return ans;
}
