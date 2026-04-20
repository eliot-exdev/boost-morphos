#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <path> " << std::endl;
        return 1;
    }
    const std::filesystem::path p{argv[1]};
    if (std::filesystem::exists(p)) {
        std::cout << p.string() << " size: " << std::filesystem::file_size(p) << " kb" << std::endl;
    } else {
        std::cout << p.string() << " does not exists!" << std::filesystem::file_size(p) << std::endl;
    }

    return 0;
}