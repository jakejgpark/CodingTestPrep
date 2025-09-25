#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*

I'm leaving a personal review.
If you don't want to risk any spoilers while rading, please feel free to skip this.

This is a simple DFS/BFS problem, but the starting point is fixed at 1.
I considered placing cnt++ after
int cur = q.front();
q.pop();
However, in that case the starting point would always be treated as 1.
Therefore, I placed cnt++ at the point where a new node is added to the queue.

*/


int main(void) {
	int n,m;
	cin>>n>>m;
	
	queue<int> q;
	
	vector<vector<int>> graph(n+1);
	vector<int> visit(n+1);
	
	q.push(1);
	visit[1]=1;
	
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	int cnt=0;
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		
		
		for(int i=0; i<graph[cur].size(); i++){
			int next = graph[cur][i];
			
			if(visit[next]) continue;
			
			q.push(next);
			visit[next]=1;
			cnt++;
		}
	}
	
	
	cout<<cnt;
	
	
    return 0;
}

