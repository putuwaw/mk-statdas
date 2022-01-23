#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int N, sum = 0, idx = 0;
    while(cin >> N){
        sum += N;
        idx++;
        v.push_back(N);
    }
    double md, mean = (float)sum / idx;
    while(!v.empty()){
        int temp = v.back();
        md += abs(temp-mean);
        v.pop_back();
    }
    cout << md / (float)idx;
    return 0;
}
