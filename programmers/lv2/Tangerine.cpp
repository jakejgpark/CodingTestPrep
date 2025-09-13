#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map<int,int> maps;


bool cmp(int a, int b){
	return a>b;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int cnt=0;
	int sum=0;
	
	for(int i=0; i<tangerine.size(); i++){
		int index = tangerine[i]; // index: size -> It becomes 'key'
		maps[index]++;
	}
	
//	unordered_map<int, int>::iterator it;
	vector<int> Numbers;
	for(auto it:maps){
		Numbers.push_back(it.second);
	}
	
	sort(Numbers.begin(), Numbers.end(), cmp);
	for(int i=0; i<Numbers.size(); i++){
		if(Numbers[i]>0){
			k-=Numbers[i];
			cnt++;
		}
		
		if(k<=0) break;
	}
	answer=(cnt);
    
    return answer;
}


int main(void){
	//vector<int> v = {4,3,2,1};
	//string s = "-1 2 3 4";
	//int n = 12345;
	int b = 10;
	int y = 2;
	int num =5000;
	vector<int> p ={70,50,80,50};
	vector<int> t ={1,3,2,5,4,5,2,3};
	int k = 6;
	int limit = 100;
//	solution(b,y);
	cout<<solution(k, t);
	
	return 0;
}
