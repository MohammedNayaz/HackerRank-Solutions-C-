#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, a;
    vector<int> v;
    cin >> n;
    
    for(int i=0; i<n ; i++){
        cin>> a;
        v.push_back(a);
    }
    
    sort (v.begin(),v.end());
    
    for(int i=0; i<n ; i++){
        cout << v[i] <<" ";
    }

    return 0;
}
