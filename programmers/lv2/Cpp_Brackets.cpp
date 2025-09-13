#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int lt=0;
    int rt=0;
    for(int i=0; i<s.length(); i++){
    	if(lt<rt) return false;
		
		if(s[i]=='('){
    		lt++;
		}else if(s[i]==')'){
			rt++;
		}
    	
    	
	}
	
	if(lt!=rt) return false;

    return answer;
}


int main(void){
	vector<int> v = {4,3,2,1};
	string s = "-1 2 3 4";
	int n = 12345;
	solution(s);
	
	return 0;
}
