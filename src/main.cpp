#include <iostream>
#include <caver/resource/vfs.h>
#include <caver/scene/scene.h>

int main(int argc, char** argv) {
    std::cout << "========================================================\n";
    std::cout << " OpenSwordigo Native Engine Baseline Driver (Milestone 1)\n";
    std::cout << "========================================================\n\n";

    // 1. Initialize Virtual File System
    caver::VFS::instance().initDefaultPaths();

    std::string sceneFile = "town_herohouse.scene";
    if (argc > 1) {
        sceneFile = argv[1];
    }

    std::cout << "[OpenSwordigo] Target Scene: " << sceneFile << "\n";
    std::cout << "[OpenSwordigo] Resolved Path: " << caver::VFS::instance().resolvePath(sceneFile) << "\n\n";

    // 2. Load native scene structure
    caver::Scene scene;
    if (!scene.loadFromFile(sceneFile)) {
        std::cerr << "[OpenSwordigo] FAILED: Could not load scene " << sceneFile << std::endl;
        return 1;
    }

    // 3. Dump scene object graph & components
    scene.dumpHierarchy(std::cout);

    // 4. Perform single engine tick (update dt = 1/60s)
    std::cout << "[OpenSwordigo] Executing single native engine tick (dt = 0.01667s)...\n";
    scene.update(0.01667f);
    std::cout << "[OpenSwordigo] Engine tick complete.\n\n";

    std::cout << "========================================================\n";
    std::cout << " MILESTONE 1 SUCCESS: Real Swordigo scene loaded and\n";
    std::cout << " decoded natively without executing a single instruction\n";
    std::cout << " from libswordigo.so or requiring ARM emulation!\n";
    std::cout << "========================================================\n";

    return 0;
}
