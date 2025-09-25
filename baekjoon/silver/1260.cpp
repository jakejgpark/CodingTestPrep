#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*

I'm leaving a personal review.
If you don't want to risk any spoilers while rading, please feel free to skip this.

This problem is about BFS and DFS.
The main focus is implementing an adjacency list for the graph.
For visit initialization, I tried to use fill.

It is a problem where each node only needs to be visited once (not a backtracking problem).

*/

int n,m,v;
void dfs(int st, const vector<vector<int>>& graph, vector<int>& visit){
	visit[st]=1;
	
	cout<<st<<" ";
	
	for(int i=0; i<graph[st].size(); i++){
		int next = graph[st][i];
		
		if(visit[next]) continue;
		dfs(next, graph, visit);
	}
}

int main(void) {
	
	cin>>n>>m>>v;
	vector<vector<int>> graph(n+1);
	vector<int> visit(n+1);
	
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		
		graph[a].push_back(b);
		graph[b].push_back(a);
		
	}
	
	for(int i=0; i<graph.size(); i++){
		sort(graph[i].begin(),graph[i].end());
	}
	
	dfs(v,graph, visit);
	
	fill(visit.begin(), visit.end(), 0);
	
	cout<<'\n';
	queue<int> q;
	
	q.push(v);
	visit[v]=1;
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		cout<<cur<<" ";
		
		for(int i=0; i<graph[cur].size(); i++){
			int next = graph[cur][i];
			if(visit[next]) continue;
			q.push(next);
			visit[next]=1;
		}
	}
	
	
    return 0;
}

