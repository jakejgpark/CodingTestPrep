#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt=0;
    for(int i=1; i<=n; i++){
    	int sum=0;
    	for(int j=i; j<=n; j++){
    		sum+=j;
    	//	cout<<"j: "<<j<<endl;
    		if(sum==n){
    			cnt++;
    			break;
			}
			
			if(sum>n){
				break;
			}
		}
	}
    answer=cnt; 
    return answer;
}

int main(void){
	cout<<solution(15);
	return 0;
}
