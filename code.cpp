#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> a;
    string tmp = "";

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            tmp += s[i];
        } else {
            if (tmp != "") {
                int j = 0;
                while (j < tmp.length() - 1 && tmp[j] == '0') j++;
                
                tmp = tmp.substr(j);

                a.push_back(tmp);
                tmp = "";
            }
        }
    }

    if (tmp != "") {
        int j = 0;
        while (j < tmp.length() - 1 && tmp[j] == '0') j++;
        tmp = tmp.substr(j);

        a.push_back(tmp);
    }

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }

    return 0;
}