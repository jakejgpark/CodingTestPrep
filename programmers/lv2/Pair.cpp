#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s)
{
	vector<char> v;
	int answer=0;
	for(int i=0; i<s.size(); i++){
		if(!v.empty() && v.back()==s[i]){
			v.pop_back();
		}else{
			v.push_back(s[i]);
		}
	}
	
	if(v.empty()){
		return 1;
	}else{
		return 0;
	}
	
}


int main(void){
	cout<<solution("aa");
	return 0;
}
