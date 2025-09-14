#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool cmp(int a, int b){
	return a>b;
}

int main(void){
	int n,k;
	
	cin>>n>>k;
	vector<int> v;
	for(int i=0; i<n; i++){
		int tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	int cnt=0;
	
	for(int i=0; i<v.size(); i++){
		if(k==0) break;
		while(v[i]<=k){
			k-=v[i];
			cnt++;
			if(k==0) break;
		}
	}
	
	cout<<cnt;
	
	
	return 0;
}
