#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n,s;
vector<int> v;
vector<int> selected;
int cnt;

void dfs(int depth){
	if(depth==n){
		if(selected.empty()) return;

		int sum=0;
		for(int i=0; i<selected.size(); i++){
			sum+=selected[i];
		}
		
		if(sum==s){
			cnt++;
		}
	}else{
		selected.push_back(v[depth]); //select
		dfs(depth+1);
		selected.pop_back(); // does not select
		dfs(depth+1);
	}
}

int main(void) {
	
	cin>>n>>s;
	
	for(int i=0; i<n; i++){
		int tmp;
		cin>>tmp;
		
		v.push_back(tmp);
	}
	
	dfs(0);
	cout<<cnt;
	
	

	
    return 0;
}

