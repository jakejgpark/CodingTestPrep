#include <string>
#include <vector>

using namespace std;

#define MOD 1234567

int fibonacci(vector<int>& vec, int num){
    if(num<=0){
        return 0;
    }
	if(num==1||num==2){
		return 1;
	}
	
	if(vec[num]!=-1){
		return vec[num];
	}
	
	vec[num] = (fibonacci(vec, num-1)+fibonacci(vec, num-2))%MOD;
	
	return vec[num];
}

int solution(int n) {
    int answer = 0;
    
    vector<int> v(n+1,-1);
    
    answer=(fibonacci(v, n))%MOD;
    
    return answer;
}
