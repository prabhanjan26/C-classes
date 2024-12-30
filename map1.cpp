#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<int, int> mp;
    vector<int> v{1, 2, 1, 2, 1, 3, 4, 1, 2, 3};
    
    for (int i = 0; i < v.size(); i++) {
        int key = v[i];
        mp[key]++;
    }

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << "Key: " << it->first << " Value: " << it->second << endl;
    }

    return 0;
}
