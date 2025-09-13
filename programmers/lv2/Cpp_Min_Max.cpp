#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmps = "";
    
    vector<int> v;
    for(int i=0; i<s.length(); i++){
    	if(s[i]==' '){
    		cout<<stoi(tmps)<<endl;
    		v.push_back(stoi(tmps));
    		tmps.clear();
		}else{
			tmps+=s[i];
		}
    	
	}
	
	v.push_back(stoi(tmps));
	
	sort(v.begin(), v.end());
	tmps="";
	
	tmps=to_string(v[0])+" "+to_string(v[v.size()-1]);
	answer = tmps;
    
    return answer;
}



int main(void){
	vector<int> v = {4,3,2,1};
	string s = "-1 2 3 4";
	int n = 12345;
	solution(s);
	
	return 0;
}
