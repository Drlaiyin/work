#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> queue;
    std::string command;

    while (true) {
        std::cin >> command;

        if (command == "push") {//push实现输入
            int value;
            std::cin >> value;
            queue.push_back(value);
        }
        else if (command == "pop") {//pop实现出队
            if (!queue.empty()) {
                queue.pop_front();
            }
        }
        else if (command == "print") {//输出的实现
            for (int value : queue) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
        else if (command == "exit") {//退出实现
            break;
        }
    }

    return 0;
}