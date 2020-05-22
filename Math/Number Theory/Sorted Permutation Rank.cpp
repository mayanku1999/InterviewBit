int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans= (ans*i)%1000003;
        }
        return ans%1000003;
}

int Solution::findRank(string A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        int c=0;
        for(int j=i+1;j<A.size();j++){
            if(A[j]<A[i])c++;
        }
        ans= ((ans)%1000003 + ((fact(A.size()-1 -i)*c))%1000003)%1000003;
    }
    return (ans+1)%1000003;
    
}
