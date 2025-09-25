#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*

I'm leaving a personal review.
If you don't want to risk any spoilers while rading, please feel free to skip this.

The 2D vector must be defined properly.
Also, make sure not to confuse the y-axis (row index) with the x-axis (column index) when setting up the indices.

*/

int m,n;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

struct Node{
	int y,x;
};

int main(void) {

	cin>>m>>n;
	
	vector<vector<int>> maps(n,vector<int>(m,0));
	vector<vector<int>> dist(n,vector<int>(m,-1));
	queue<Node> q;
	
	
	for(int i=0; i<maps.size(); i++){ // row
		for(int j=0; j<maps[0].size(); j++){ // column
			cin>>maps[i][j];
			if(maps[i][j]==1){
				Node temp;
				temp.x = j;
				temp.y = i;
				q.push(temp);
				dist[i][j]=0;
			}
		}
	}
	
	int dist_final=0;
	
	while(!q.empty()){
		Node cur = q.front();
		q.pop();
		
		for(int i=0; i<4; i++){
			int ny = cur.y+dy[i];
			int nx = cur.x+dx[i];
			
			if(nx<0||ny<0||nx>=m||ny>=n) continue;
			if(maps[ny][nx]!=0) continue;
			if(dist[ny][nx]!=-1) continue;
			
			dist[ny][nx]=dist[cur.y][cur.x]+1;
			q.push({ny,nx});
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(maps[i][j]==0 && dist[i][j]==-1){
				cout<<-1<<"\n";
				return 0;
			}
			
			dist_final = max(dist_final, dist[i][j]);
		}
	}
	
	cout<<dist_final<<"\n";
	
    return 0;
}

