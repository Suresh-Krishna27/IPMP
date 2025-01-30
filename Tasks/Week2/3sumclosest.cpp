//https://www.interviewbit.com/problems/3-sum/
int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int m=INT_MIN;
    int t=INT_MAX;
    int n=A.size();
    for(int i=0;i<n-2;i++){
        if(i>0 && A[i]==A[i-1]) continue;
        int j=i+1;
        int k=n-1;
        int sum=B-A[i];
        while(j<k){
            int p=A[j]+A[k];
            if(p==sum){
                return p+A[i];
            }
            else if(p<sum){
                m=max(m,p+A[i]);
                j++;
            }else{
                t=min(t,p+A[i]);
                k--;
            }
        }
    }
    if(abs(B-m)>=abs(B-t)){
        return t;
    }
    else{
        return m;
    }    
        
    
    
}
