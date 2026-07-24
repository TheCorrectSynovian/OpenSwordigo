#ifndef CAVER_VFS_H
#define CAVER_VFS_H

#include <string>
#include <vector>
#include <optional>
#include <cstdint>

namespace caver {

class VFS {
public:
    static VFS& instance();

    void addSearchPath(const std::string& path);
    void initDefaultPaths();

    std::optional<std::vector<uint8_t>> readFile(const std::string& filename) const;
    std::optional<std::string> readTextFile(const std::string& filename) const;
    std::string resolvePath(const std::string& filename) const;
    bool fileExists(const std::string& filename) const;

private:
    VFS() = default;
    std::vector<std::string> searchPaths_;
};

} // namespace caver

#endif // CAVER_VFS_H
