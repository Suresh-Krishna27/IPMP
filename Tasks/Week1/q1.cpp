// https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/
#include <bits/stdc++.h>
using namespace std;
int Odd(int ar[], int n)
{
    int res = 0; 
    for (int i = 0; i < n; i++)     
        res = res ^ ar[i];
    
    return res;
}

int main()
{
    int ar[] = {7, 2, 6, 4, 5, 2, 4, 6, 5, 2, 4, 4, 2};
    int n = sizeof(ar)/sizeof(ar[0]);
    cout << Odd(ar, n);
    return 0;
}
