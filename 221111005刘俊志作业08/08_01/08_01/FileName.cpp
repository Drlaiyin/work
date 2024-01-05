#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    int num;

    // �ӱ�׼�����ȡһϵ������������������ӵ�������
    while (std::cin >> num) {
        myList.push_back(num);
    }

    // ɾ����һ�������һ��Ԫ��
    if (!myList.empty()) {
        myList.pop_front(); // ɾ����һ��Ԫ��
        myList.pop_back(); // ɾ�����һ��Ԫ��
    }

    // ��ӡʣ�������
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}