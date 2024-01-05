#include <iostream>
#include <vector>
#include <algorithm>

void uniqueSort(std::vector<int>& nums) {
    // 去除重复元素
    std::sort(nums.begin(), nums.end());
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
}

int main() {
    std::vector<int> nums;
    int num;

    // 从标准输入读取一系列整数
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // 调用uniqueSort函数去除重复元素并按升序排序
    uniqueSort(nums);

    // 按顺序打印处理后的容器元素
    for (int i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}