#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


/*

I'm leaving a personal review.
If you don't want to risk any spoilers while rading, please feel free to skip this.

This problem is a fundamental adjency list problem.
Most of BFS problems are solved by using an adjacency list rather than an adjacency matrix.

*/


int main(void) {
	
	//freopen("test.txt","rw",stdin);
	
	int n,m;
	cin>>n;
	cin>>m;
	
	vector<vector<int>> v(101);
	vector<int> visit(n+1);
	
	queue<int> q;
	
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	q.push(1);
	visit[1]=1;
	
	int cnt = 0;
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		
		//cout<<"cur: "<<cur<<endl;
		
		for(int i=0; i<v[cur].size(); i++){
			int next = v[cur][i];
		//	cout<<"next: "<<next<<endl;
			if(visit[next]) continue;
			q.push(next);
			visit[next]=1;
			cnt++;
		}
	}
	
	cout<<cnt;
	
	
    return 0;
}

