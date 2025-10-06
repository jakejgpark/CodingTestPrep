#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int n,m;
int visit[10];

void dfs(int start, int depth){
	if(depth==m){
		for(int i=0; i<m; i++){
			cout<<arr[i]<<" ";
		}
		cout<<'\n';
	}else{
		for(int i=start; i<=n; i++){
		//	if(visit[i]) continue;
		//	visit[i]=1;
			arr[depth]=i;
			dfs(i, depth+1); // not i+1 but i
		//	visit[i]=0;
		}
	}
}


int main(void) {
	
	cin>>n>>m; // 4 2
	dfs(1,0);

    return 0;
}

