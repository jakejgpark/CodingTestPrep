#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int total_size = brown+yellow;
    int calc = 0;
    int width=0;
    int height=0;
    for(height=3; ; height++){
    	// brown = height*2+width*2-4; --- width?
		width=(brown+4)/2-height;
		
		if((brown+yellow)==(height*width)){
		/*	cout<<"brown: "<<brown<<endl;
			cout<<"yellow: "<<yellow<<endl;
			cout<<"height: "<<height<<endl;
			cout<<"width: "<<width<<endl; */
			answer.push_back(width);
			answer.push_back(height);
			break;	
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
	solution(b,y);
	
	return 0;
}
