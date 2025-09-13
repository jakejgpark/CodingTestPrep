#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    // 40 40 60 60
    int lt = 0;
    int rt = people.size()-1;
    
    while(lt<rt){
    	
    	int total=0;
    	
    	if(lt<limit){
    		total+=people[lt++];
		}
		
		total+=people[rt--];
		
		if(total<=limit){
			
		}
		
		
    	
	}
    
    
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
	int limit = 100;
//	solution(b,y);
	cout<<solution(p, limit);
	
	return 0;
}
