#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int visit[10];
int arr[10];

void dfs(int depth){
	if(depth==m){
		for(int i=0; i<m; i++){
			cout<<arr[i]<<" ";
		}
		cout<<'\n';
	}else{
		for(int i=1; i<=n; i++){
			if(visit[i]) continue;
			visit[i]=1;
			arr[depth]=i;
			dfs(depth+1);
			visit[i]=0;
		}
	}
}


int main(void) {
	
	cin>>n>>m; // 4 2
	dfs(0);

    return 0;
}

