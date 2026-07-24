#include "caver/resource/vfs.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sys/stat.h>

namespace caver {

VFS& VFS::instance() {
    static VFS instance;
    return instance;
}

void VFS::addSearchPath(const std::string& path) {
    if (!path.empty()) {
        searchPaths_.push_back(path);
    }
}

void VFS::initDefaultPaths() {
    const char* home = std::getenv("HOME");
    if (home) {
        std::string userAssets = std::string(home) + "/.local/share/swordigo-desktop/assets/resources";
        addSearchPath(userAssets);
        std::string userRootAssets = std::string(home) + "/.local/share/swordigo-desktop/assets";
        addSearchPath(userRootAssets);
    }
    addSearchPath("./assets/resources");
    addSearchPath("./assets");
    addSearchPath(".");
}

static bool checkFileExists(const std::string& fullPath) {
    struct stat st;
    return (stat(fullPath.c_str(), &st) == 0 && S_ISREG(st.st_mode));
}

std::string VFS::resolvePath(const std::string& filename) const {
    if (filename.empty()) return "";
    if (filename[0] == '/') {
        if (checkFileExists(filename)) return filename;
    }
    for (const auto& path : searchPaths_) {
        std::string candidate = path + "/" + filename;
        if (checkFileExists(candidate)) {
            return candidate;
        }
    }
    return filename;
}

bool VFS::fileExists(const std::string& filename) const {
    std::string path = resolvePath(filename);
    return checkFileExists(path);
}

std::optional<std::vector<uint8_t>> VFS::readFile(const std::string& filename) const {
    std::string fullPath = resolvePath(filename);
    std::ifstream file(fullPath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        return std::nullopt;
    }
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<uint8_t> buffer(size);
    if (file.read(reinterpret_cast<char*>(buffer.data()), size)) {
        return buffer;
    }
    return std::nullopt;
}

std::optional<std::string> VFS::readTextFile(const std::string& filename) const {
    auto data = readFile(filename);
    if (!data) return std::nullopt;
    return std::string(data->begin(), data->end());
}

} // namespace caver
