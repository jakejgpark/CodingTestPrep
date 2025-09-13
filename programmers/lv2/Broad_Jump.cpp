#include <string>
#include <vector>
#include <iostream>
using namespace std;

int cnt = 0;

vector<int> v(2001,0);

#define DIV 1234567


long long solution(int n) {
    long long answer = 0;
    
    v[1]=1;
	v[2]=2;
	v[3]=3;    //1+1+1, 1+2, 2+1,
	v[4]=5;    //1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2
	v[5]=8;    //1+1+1+1+1, 1+1+1+2, 1+1+2+1, 1+2+1+1, 2+1+1+1, 1+2+2, 2+1+2, 2+2+1
    
    for(int i=6; i<=n; i++){
    	if(!v[i]){
    		v[i]=(v[i-1]%DIV+v[i-2]%DIV)%DIV;
		}
	}
	
	answer = v[n];
    
    return answer;
}



int main(void){
	int b = 10;
	int y = 2;
	int num =5000;
	vector<int> p ={70,50,80,50};
	vector<int> t ={1,3,2,5,4,5,2,3};
	int k = 2000;
	int limit = 100;
	vector<int> arr = {2,6,8,14};
//	solution(b,y);
	cout<<solution(k);
	
	return 0;
}
