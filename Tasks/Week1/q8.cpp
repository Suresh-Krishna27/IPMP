// https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set<int> st;
    for (int i = 0; i < a.size(); i++)
        st.insert(a[i]);
    for (int i = 0; i < b.size(); i++)
        st.insert(b[i]);
    vector<int> res;
    for (auto it : st)
        res.push_back(it);
    return res;
}
vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int> res; 
    int m = a.size(); 
    int n = b.size(); 
    for(int i = 0; i < m; i++) {
        if(i > 0 && a[i - 1] == a[i])
            continue;
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                res.push_back(a[i]);
                break; 
            }
        }
    }
    return res;
}
int main() {

    vector<int> a = {1, 1, 2, 2, 2, 4};
    vector<int> b = {2, 2, 4, 4};

    vector<int> res = findUnion(a, b);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    }

     vector<int> res = intersection(a, b);    
    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}
