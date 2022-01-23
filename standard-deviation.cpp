#include <bits/stdc++.h>
using namespace std;
int main(){
	int num[1007], sum = 0, counter = 0;
	double mean, s, sX = 0;
	while(cin>>num[++counter]){
		sum += num[counter];
	}
	mean = double(sum) / double(--counter);
	for (int i = 1; i <= counter; i++){
		sX += pow(num[i] - mean,2);
	}
	s = sqrt((sX) / double(--counter));
	cout << setprecision(16) << s;
	return 0;
}