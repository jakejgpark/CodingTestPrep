#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    
    string tmp = "";
    int lv_space = 1;
    for(int i=0; i<s.length(); i++){
    	if(s[i]==' '){
    		lv_space = 1;
    		tmp+=s[i];
		}else{
			if(lv_space==1){
				if(s[i]>='a'&&s[i]<='z'){
					tmp+=(s[i]-'a')+'A';
				}else{
					tmp+=s[i];
				}
				lv_space=0;
			}else{
				if(s[i]>='A' && s[i]<='Z'){
					tmp+=(s[i]-'A')+'a';
				}else{
					tmp+=s[i];
				}
			}
		}
	}
    
    answer=tmp;
    
    return answer;
}

int main(void){
	vector<int> v = {4,3,2,1};
	string s = "-1 2 3 4";
	string st = "3people unFollowed me";
	int n = 12345;
	solution(s);
	cout<<solution(st);
	return 0;
}
