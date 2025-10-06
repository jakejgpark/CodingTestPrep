#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*

*/

struct Node{
	int y,x;
};

int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

int main(void) {
	
	int m,n;
	cin>>m>>n;
	
	vector<vector<int>> graph(n,vector<int>(m,0));
	vector<vector<int>> dist(n,vector<int>(m,-1));
	
	queue<Node> q;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>graph[i][j];
			if(graph[i][j]==1){
				q.push({i,j});
				dist[i][j]=0;
				graph[i][j]=1;
			}
		}
	}
	
	while(!q.empty()){
		Node cur = q.front();
		q.pop();
		
		for(int i=0; i<4; i++){
			int ny = cur.y+dy[i];
			int nx = cur.x+dx[i];
			
			if(ny<0||nx<0||ny>=n||nx>=m) continue;
			
			if(dist[ny][nx]!=-1) continue;
			if(graph[ny][nx]!=0) continue;
			
			q.push({ny,nx});
			dist[ny][nx]=dist[cur.y][cur.x]+1;
			graph[ny][nx]=1;
		}
	}
	
	int maxx = -247000000;
	int lv = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(dist[i][j]>maxx){
				maxx=dist[i][j];
			}
			
			if(graph[i][j]==0){
				lv=1;
			}
		}
	}
	
	if(lv){
		cout<<-1;
	}else{
		cout<<maxx;		
	}
	
	
    return 0;
}

