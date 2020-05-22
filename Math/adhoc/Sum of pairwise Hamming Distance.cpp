int Solution::hammingDistance(const vector<int> &arr) {
    int ans=0;
    for(int i=0;i<32;i++){
        int count =0;
        for(int j=0;j<arr.size();j++){
            if(arr[j] & (1<<i))count++;
        }
        ans+=(count*(arr.size()-count)*2);
    }
    return (int)ans; 
}
