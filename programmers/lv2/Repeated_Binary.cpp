#include <string>
#include <vector>
#include <iostream>

#include <unordered_map>
using namespace std;

int local_cnt=0;

int remove_zeros(string& s){
	string tmp="";
	
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0'){
			local_cnt++;
		}else{
			tmp+=s[i];
		}
	}
	return tmp.length();
}
string convert_to_binary(int len){
	
	string tmp = "";
	while(len>0){
		if(len%2==0){
			tmp='0'+tmp;
		}else{
			tmp='1'+tmp;
			
		}
		len/=2;
	}
	
	return tmp;
}

vector<int> solution(string s) {
    vector<int> answer;
    int tmp=0;
    int cnt=0;
    while(1){
    	cnt++;
    	int len = remove_zeros(s);
    	s = convert_to_binary(len);
    	if(s.length()==1 && s[0]=='1') break;
	}
	
	answer.push_back(cnt);
	answer.push_back(local_cnt);
	
//	cout<<"cnt: "<<cnt<<endl;
//	cout<<"cnt: "<<local_cnt<<endl;
	
    
    
    return answer;
}

int main() {
	string s = "1111111";
	solution(s);
	
    return 0;
}
