#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class solution {
public:
    // 插入排序 从第二个元素开始依次插入到前面的已排好的对应的位置
    vector<int> insertSort(vector<int>& arr)
    {
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            int cur = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > cur)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = cur;
        }
        return arr;
    }

};

int main()
{
    solution so1;

    //插入排序测试用例
    vector<int> testv = { 2, 4, 5, 1, 7, 3, 2 };
    vector<int> res = so1.insertSort(testv);
    // 打印vector
    for (auto& c : res) std::cout << c << " ";
    std::cout << std::endl;
    
    std::cout << "Hello World!\n";
}

