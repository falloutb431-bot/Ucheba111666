#include <iostream>
#include <vector>

int countGreater(const std::vector<int>& arr, int x) {
    int left = 0;
    int right = static_cast<int>(arr.size()); 

    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > x) {
            
            right = mid;
        }
        else {
            
            left = mid + 1;
        }
    }

  
    return static_cast<int>(arr.size()) - left;
}

int main() {
    std::vector<int> arr = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };

    int x;
    std::cout << "Введите точку отсчёта: ";
    if (!(std::cin >> x)) {
        std::cerr << "Ошибка ввода.\n";
        return 1;
    }

    int result = countGreater(arr, x);
    std::cout << "Количество элементов в массиве больших, чем " << x << ": " << result << "\n";

    return 0;
}