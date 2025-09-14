#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    string tmp;
    int total = 0;
    int lv_neg = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i]=='+'||s[i]=='-') {
            if (lv_neg){
            	total -= stoi(tmp);
			}
            else{
            	total += stoi(tmp);	
			}
            tmp.clear();

            if (s[i] == '-') lv_neg = 1;
        } else {
            tmp+=s[i];
        }
    }

    if(lv_neg){
    	total -= stoi(tmp);
	}
    else{
    	total += stoi(tmp);
	}

    cout << total;
    return 0;
}

