#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n,m;
int cnt;
int cnt_max=1;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(int y, int x, const vector<vector<int>>& graph, int thd, vector<vector<int>>& flood){
	flood[y][x]=1;
	//cout<<"y x: "<<y<<" "<<x<<'\n';
	
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(nx<0||ny<0||nx>=n||ny>=n) continue;
		if(flood[ny][nx]) continue;
		if(graph[ny][nx]<=thd) continue;
		
		dfs(ny,nx,graph, thd, flood);
	}
}

int main(int argc, char** argv) {
	
	cin>>n;
	
	vector<vector<int>> graph(n,vector<int>(n,0));
	vector<vector<int>> flood(n,vector<int>(n,0));
	int maxx = -247000000;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>graph[i][j];
			if(graph[i][j]>maxx){
				maxx=graph[i][j];
			}
		}
	}
	
	//최대 개수 구하기.
	
	//1-100까지해야됨. 
	for(int thd=0; thd<maxx; thd++){
		for(int a=0; a<n; a++){
			for(int b=0; b<n; b++){
				flood[a][b]=0;
			}
		}
		cnt=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(flood[i][j]) continue;
				if(graph[i][j]<=thd) continue;
				cnt++;
				dfs(i,j,graph, thd, flood);
			}
		}
		
		if(cnt>cnt_max){
			cnt_max=cnt;
		}
	}
	
	cout<<cnt_max;
	

	return 0;
}
