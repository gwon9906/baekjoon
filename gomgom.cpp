#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    unordered_set<string> nameSet;

    for (int i = 0; i < num; i++) {
        string temp;
        cin >> temp;
        if (temp == "ENTER") {
            // "ENTER" 명령을 만나면 set을 비우고 중복 카운트를 리셋합니다.
            nameSet.clear();
        }
        else {
            // 이름이 set에 없다면 추가하고 카운트를 증가시킵니다.
            if (nameSet.find(temp) == nameSet.end()) {
                nameSet.insert(temp);
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
