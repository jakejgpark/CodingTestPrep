#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    	string s = to_string(x);
    	bool ret = 0;
    	string tmp = "";
    	
		for(int i=0; i<s.length(); i++){
			tmp=s[i]+tmp;
		}
		
		return s==tmp;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {3,2,4};
    int target = 121;
    
    //vector<int> result = solution.twoSum(target);

    int result = solution.isPalindrome(target);
		
	/*
    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
	*/
	
	cout<<result;
    return 0;
}
