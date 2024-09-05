#include<iostream>
#include<string>
using namespace std;

int count_str(string s) {
    int count = 0;
    int temp = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' || s[i] == '.' || s[i] == ',') {
            continue;
        }
        else {
            for (int j = i; j < s.size(); j++) {
                if (s[j] == ' ' || s[j] == '.' || s[j] == ',') {
                    temp = j;
                    count++;
                    break;
                }
                else {
                    continue;
                }
            }
        }
        if (i <= temp) {
            continue;
        }
    }
    return count;
}

int main() {
    string s;
    getline(cin, s);
    cout << count_str(s);
    return 0;
}
