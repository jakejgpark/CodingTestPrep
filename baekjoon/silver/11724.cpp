#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*

I'm leaving a personal review.
If you don't want to risk any spoilers while rading, please feel free to skip this.

This problem is a basic BFS problem.
The reason for iterating from i = 1 to n in the initial for loop is to provide every node as a possible starting point,
so that disconnected nodes can be newly counted.
After that, the connected nodes are explored using BFS with a while loop.

*/

int n,m;

int main(void) {
	
	queue<int> q;
	
	cin>>n>>m;
	vector<vector<int>> graph(n+1);
	vector<int> visit(n+1);
	int cnt=0;
	
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	for(int i=1; i<=n; i++){
		if(visit[i]) continue;
		q.push(i);
		visit[i]=1;
		cnt++;
		
		while(!q.empty()){
			int cur = q.front();
			q.pop();
			
			for(int j=0; j<graph[cur].size(); j++){
				int next = graph[cur][j];
				
				if(visit[next]) continue;
				q.push(next);
				visit[next]=1;
			}
		}
	}
	
	cout<<cnt;
	
    return 0;
}

