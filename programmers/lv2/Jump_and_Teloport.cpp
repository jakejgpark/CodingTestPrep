#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n)
{
    int ans = 0;
    
    int bat = 0;
    
    while(n>0){
    	if(n%2==0){
    		n/=2;
		}else{
			n-=1;
			bat++;
		}
	}
    
    ans=bat;
    
    return ans;
}


int main(void){
	//vector<int> v = {4,3,2,1};
	//string s = "-1 2 3 4";
	//int n = 12345;
	int b = 10;
	int y = 2;
	int num =5000;
//	solution(b,y);
	cout<<solution(num);
	
	return 0;
}
