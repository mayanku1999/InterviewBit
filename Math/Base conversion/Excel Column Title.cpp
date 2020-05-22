string Solution::convertToTitle(int A) {
    string ans="";
    while(A){
        int c=A%26;
        if(c==0)ans+='Z',A=A/26-1;
        else {
        char t= 65 + c-1;
        ans+=t;
        A/=26;}
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
