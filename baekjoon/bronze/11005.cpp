#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n,b;

int main(void) {
	
	cin>>n>>b;
	
	string result = "";	
	while(n>0){
		int remainder = n%b;
		// e.g. 17%12 = 5
		//cout<<"remainder: "<<remainder<<'\n';
		if(remainder<10){
			result = (char)(remainder+'0')+result;
		}else{
			result = (char)(remainder+'A'-10)+result; 
		}
		
		n/=b;
	}
	
	cout<<result;
	
    return 0;
}

