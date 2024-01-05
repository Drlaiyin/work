#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> queue;
    std::string command;

    while (true) {
        std::cin >> command;

        if (command == "push") {//pushʵ������
            int value;
            std::cin >> value;
            queue.push_back(value);
        }
        else if (command == "pop") {//popʵ�ֳ���
            if (!queue.empty()) {
                queue.pop_front();
            }
        }
        else if (command == "print") {//�����ʵ��
            for (int value : queue) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
        else if (command == "exit") {//�˳�ʵ��
            break;
        }
    }

    return 0;
}