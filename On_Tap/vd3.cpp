#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("str.txt");
    if (!file) {
        std::cerr << "Khong the mo tep." << std::endl;
        return 1;
    }

    std::string longestString;
    size_t maxLength = 0;
    int count = 0;
    std::string line;
    while (std::getline(file, line)) {
        size_t length = line.length();
        if (length > maxLength) {
            maxLength = length;
            longestString = line;
            count = 1;
        } else if (length == maxLength) {
            count++;
        }
    }

    file.close();

    std::cout << "Chuoi co nhieu ky tu nhat co do dai la: " << longestString << std::endl;
    std::cout << "So luong chuoi co do dai bang voi do dai cua chuoi tren la: " << count << std::endl;

    return 0;
}
