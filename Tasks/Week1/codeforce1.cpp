//https://codeforces.com/contest/2050/problem/A
#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int n,m,r,c;
    long a[k];
    for(int i=0;i<k;i++){
        cin>>n>>m>>r>>c;
        a[i]=(n-r)*(2*m-1)+m-c;
    }

    for(int i=0;i<k;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
