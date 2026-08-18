#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    const char* filename = (argc > 1) ? argv[1] : "tshark_log.txt";
    std::ofstream file(filename, std::ios::app);
    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << line << std::endl;
        if (file.is_open()) file << line << std::endl;
    }
    return 0;
}
