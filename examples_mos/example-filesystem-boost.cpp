#include <iostream>
#include <boost/filesystem.hpp>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <path> " << std::endl;
        return 1;
    }
    const boost::filesystem::path p{argv[1]};
    if (boost::filesystem::exists(p)) {
        std::cout << p.string() << " size: " << boost::filesystem::file_size(p) << " kb" << std::endl;
    } else {
        std::cout << p.string() << " does not exists!" << boost::filesystem::file_size(p) << std::endl;
    }

    return 0;
}