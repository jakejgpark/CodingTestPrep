#include <string>
#include <vector>
#include <iostream>
using namespace std;

int count_ones(int n){
	int count=0;
	while(n>0){
    	if(n%2!=0){
    		count++;
		}
		n=n>>1;
	}
	return count;
}

int solution(int n) {
    int answer = 0;
    
    int len = count_ones(n);
//    cout<<"len: "<<len<<endl;
    
    for(int i=n+1; i<1000001; i++){
    	int len2 = count_ones(i);
		if(len==len2){
			n=i;
			break;
		}		
	}
	
	answer=n;
//	cout<<"answer: "<<answer<<endl;
    
    return answer;
}

int main(void){
	cout<<solution(78);
	return 0;
}
