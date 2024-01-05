#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    int num;

    // 从标准输入读取一系列整数，并将它们添加到链表中
    while (std::cin >> num) {
        myList.push_back(num);
    }

    // 删除第一个和最后一个元素
    if (!myList.empty()) {
        myList.pop_front(); // 删除第一个元素
        myList.pop_back(); // 删除最后一个元素
    }

    // 打印剩余的链表
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}