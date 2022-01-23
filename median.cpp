#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int num, idx = 0, res;
	while(cin >> num){
		v.push_back(num);
		idx++;
	}
	sort(v.begin(), v.end());
	if (idx % 2 == 1){
		idx = idx/2;
		while(idx--){
			v.pop_back();
		}
		res = v.back();
		cout << res;
	}
	else{
		idx = idx/2 - 1;
		while(idx--){
			v.pop_back();
		}
		res = v.back();
		v.pop_back();
		res += v.back();
		cout << float(res) / 2;
	}
	return 0;
}
