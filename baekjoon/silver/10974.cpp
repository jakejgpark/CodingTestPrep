#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int n,m;
int visit[10];

void dfs(int depth){
	if(depth==n){
		for(int i=0; i<depth; i++){
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
	
	cin>>n; // 4 2
	dfs(0);

    return 0;
}

