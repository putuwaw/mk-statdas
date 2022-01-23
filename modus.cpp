#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, res, max = 0, counter = 0;
	vector<int> v;
	stack<int> saveNum;
	while (cin >> num){
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	int compNum = v.back();
	while(!v.empty()){
		if (compNum == v.back()){
			counter++;
			if (counter > max){
				max = counter;
				while (!saveNum.empty()){
					saveNum.pop();
				}
				saveNum.push(compNum);
			}
			else if (counter == max){
				saveNum.push(compNum);
			}
			v.pop_back();	
		}
		else{
			counter = 1;
			compNum = v.back();
			if (counter == max){
				saveNum.push(compNum);
			}
			v.pop_back();
		}
	}
	while (!saveNum.empty()){
		res = saveNum.top();
		cout << res << " ";
		saveNum.pop();
	}
	return 0;
}
