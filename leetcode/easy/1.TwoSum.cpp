#include <string>
#include <vector>
#include <iostream>

#include <unordered_map>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int,int> maps;
		vector<int> v;
        for(int i=0; i<nums.size(); i++){
        	maps[nums[i]]=i;
		}
		
		for(int i=0; i<nums.size(); i++){
			int rest = target-nums[i];
			
			if((maps.find(rest)!=maps.end())&&(maps[rest]!=i)){
				cout<<"i and maps[rest]: "<<i<<" "<<maps[rest]<<endl;
				v.push_back(i);
				v.push_back(maps[rest]);
				return v;
			}
		}
		return v;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> result = solution.twoSum(nums, target);

    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
