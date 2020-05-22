int Solution::titleToNumber(string A) {
    int ans=0;
    for(auto s:A){
        ans*=26;
        ans+=s-'A'+1;
        
    }
    return ans;
}
