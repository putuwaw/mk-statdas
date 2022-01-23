#include <bits/stdc++.h>
using namespace std;
int main(){
	int total = 0, num, idx = 0;
	float res;
	while(cin>>num){
		total += num;
		idx++;
	}
	res = float(total)/float(idx);
	cout << res;
	return 0;
}
