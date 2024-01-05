#include <iostream>
#include <vector>
#include <algorithm>

void uniqueSort(std::vector<int>& nums) {
    // ȥ���ظ�Ԫ��
    std::sort(nums.begin(), nums.end());
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
}

int main() {
    std::vector<int> nums;
    int num;

    // �ӱ�׼�����ȡһϵ������
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // ����uniqueSort����ȥ���ظ�Ԫ�ز�����������
    uniqueSort(nums);

    // ��˳���ӡ����������Ԫ��
    for (int i : nums) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}