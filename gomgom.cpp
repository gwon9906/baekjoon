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
            // "ENTER" ����� ������ set�� ���� �ߺ� ī��Ʈ�� �����մϴ�.
            nameSet.clear();
        }
        else {
            // �̸��� set�� ���ٸ� �߰��ϰ� ī��Ʈ�� ������ŵ�ϴ�.
            if (nameSet.find(temp) == nameSet.end()) {
                nameSet.insert(temp);
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
