//https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RATINGINPRAC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int k=1;
        for(int i=0;i<n-1;i++){
            if(d[i+1]>=d[i]){
                k++;
            }
        }
        if(k==n){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

}
