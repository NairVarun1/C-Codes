#include <iostream>
#include <chrono>
#include <thread>

void stopwatch() {
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Stopwatch started. Press Enter to stop." << std::endl;
    std::cin.ignore();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
    std::cout << "Elapsed time: " << duration.count() << " seconds." << std::endl;
}

int main() {
    stopwatch();
    return 0;
}
