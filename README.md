# OpenSwordigo Engine

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![C++ Standard](https://img.shields.io/badge/C%2B%2B-17-00599C.svg)](https://en.cppreference.com/w/cpp/17)
[![Build System](https://img.shields.io/badge/CMake-3.14%2B-064F8C.svg)](https://cmake.org/)
[![Graphics API](https://img.shields.io/badge/OpenGL-ES%202.0%20%2F%203.3-green.svg)](https://www.khronos.org/opengles/)
[![Windowing](https://img.shields.io/badge/Windowing-SDL3-red.svg)](https://www.libsdl.org/)

## 1. Description

OpenSwordigo is an open-source game engine reconstruction.
It recreates the proprietary Caver engine from Touch Foo in C++17.

OpenSwordigo parses original binary game files directly.
These files include `.scene`, `.template`, PowerVR `.POD` 3D meshes, `.pvr` compressed textures, and `.lua` scripts.
OpenSwordigo executes game logic and graphics natively on Linux, macOS, and Windows.
It does not use ARM binary translation or mobile emulators.

---

> [!IMPORTANT]
> **Comparison: OpenSwordigo and SwordigoDesktop**
> - **OpenSwordigo**: A pure native C++ engine reconstruction. It parses game assets directly and runs game code natively.
> - **SwordigoDesktop**: A binary translation wrapper. It executes the original compiled ARM library (`libswordigo.so`) through CPU emulation.

---

## 2. Main Features

### 2.1 Native Protocol Buffer Decoder
- Decodes Touch Foo binary Protocol Buffer files without external dependencies.
- Supports variable integer wire types, 64-bit values, length-delimited data, and 32-bit values.
- Parses nested message structures, strings, and packed arrays.

### 2.2 Scene Graph Architecture
- **`Caver::Scene`**: Manages root scene objects, camera views, render queues, and viewport projections.
- **`Caver::SceneObject`**: Represents entity nodes using reference counting (`Caver::ReferenceCountedObject`). It maintains local and world transforms.
- **`Caver::ObjectTemplate`**: Instantiates reusable entity prefabs into scene objects.
- **`Caver::ComponentFactory`**: Maps component names (`BackgroundComponent`, `ModelComponent`, `GroundMeshComponent`, `PhysicsObjectComponent`) to C++ component classes.

### 2.3 PowerVR Asset Loaders
- **`Caver::PVRTCDecoder` and `Caver::PVRLoader`**: Decompress hardware PVRTC1 and ETC1 texture streams directly to RGBA8888 pixel buffers.
- **`Caver::PODLoader`**: Reads binary PowerVR `.POD` mesh containers. It extracts vertex positions, normal vectors, UV coordinates, and element index arrays.

### 2.4 Graphics Engine
- Uses **SDL3** for window management and **OpenGL ES 2.0 / OpenGL 3.3** for graphics rendering.
- **`Caver::RenderingContext`**: Controls state caching, MVP matrices, shader bindings, and draw calls.
- **`Caver::ShaderProgram`**: Compiles and binds OpenGL ES 2.0 vertex and fragment shaders.

### 2.5 Scripting and Configuration
- Integrates **Lua 5.1** runtime for game scripting.
- Includes **LuaFileSystem** (`lfs`) for file system access.
- Includes **LuaSocket** for network communication.
- Includes **TOML-C** for configuration file parsing.

### 2.6 Reverse Engineering Data
- Contains symbol database files (`caver_symbols.txt`, `caver_rtti.txt`, `swordigo_defined_symbols.txt`).
- Includes Ghidra analysis scripts and decompilation files in the `ghidra_scripts/` and `rln/` directories.

---

## 3. Project Directory Layout

The directory layout of OpenSwordigo is shown below:

```
OpenSwordigo/
├── include/caver/
│   ├── components/        # Engine components (Background, Model, GroundMesh, Physics)
│   ├── graphics/          # OpenGL context, PVRTC decoders, POD loaders, GLES2 shaders
│   ├── math/              # Matrix, vector, and transform math primitives
│   ├── resource/          # Virtual File System (VFS) and custom Protobuf decoder
│   └── scene/             # Scene graph, SceneObject, ObjectTemplate, ComponentFactory
├── src/
│   ├── components/        # C++ component implementations
│   ├── graphics/          # Graphics context and texture/mesh source code
│   ├── math/              # Math calculations and matrix operations
│   ├── resource/          # Asset streaming and protobuf decoding source
│   ├── scene/             # Scene graph logic and component instantiations
│   ├── lua/               # Embedded Lua 5.1 engine source code
│   ├── luafilesystem/     # LuaFileSystem module source code
│   ├── luasocket/         # LuaSocket module source code
│   ├── toml-c/            # TOML parser source code
│   ├── main.cpp           # Headless CLI scene parser source (openswordigo_native)
│   └── render_main.cpp    # SDL3 OpenGL renderer source (openswordigo_render)
├── ghidra_scripts/        # Reversing scripts and analysis tools
├── caver_symbols.txt      # Reconstructed Caver Engine C++ symbol table
├── caver_rtti.txt         # RTTI type descriptors and class hierarchy
└── CMakeLists.txt         # Primary CMake build configuration file
```

---

## 4. Software Prerequisites

Before you build OpenSwordigo, install these software tools:

| Tool / Library | Minimum Version | Description |
| :--- | :--- | :--- |
| **C++ Compiler** | C++17 (GCC 9+, Clang 10+, MSVC 2019+) | Compiles C++ source files. |
| **CMake** | 3.14 | Configures the build system. |
| **SDL3** | 3.0.0 | Controls window creation and user input. |
| **OpenGL / GLES2** | 2.0 or 3.3 Core | Renders 2D and 3D graphics. |
| **PkgConfig** | Any active version | Locates system libraries. |

---

## 5. Build Instructions

Follow these steps to compile OpenSwordigo from source code.

### Step 1: Install Software Dependencies

#### On Ubuntu or Debian Linux
Run this command to install the required packages:

```bash
sudo apt update
sudo apt install build-essential cmake pkg-config libsdl3-dev libgl1-mesa-dev
```

---

### Step 2: Configure the CMake Build System

Run this command in the repository root directory:

```bash
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release
```

This command creates a `build` directory and generates the makefiles.

---

### Step 3: Compile the Target Executables

Run this command to build all targets:

```bash
cmake --build build -j$(nproc)
```

The build process produces two executable files in the `build/` directory:
- `build/openswordigo_native`: Headless scene graph parser.
- `build/openswordigo_render`: SDL3 OpenGL renderer.

---

## 6. How to Run OpenSwordigo

### 6.1 Run the Headless Scene Parser (`openswordigo_native`)

Use `openswordigo_native` to inspect scene files without opening a GUI window.
Run this command:

```bash
./build/openswordigo_native path/to/scene.scene
```

The program prints the scene hierarchy, templates, and attached components to standard output.

---

### 6.2 Run the Native Visual Renderer (`openswordigo_render`)

Use `openswordigo_render` to open a window and render a scene file in real time.
Run this command:

```bash
./build/openswordigo_render path/to/scene.scene
```

The program performs these actions:
1. Opens an SDL3 window.
2. Initializes an OpenGL ES 2.0 graphics context.
3. Loads `.scene` files and referenced `.POD` meshes and `.pvr` textures.
4. Renders the scene graphics at 60 frames per second.

---

## 7. Engine Data Flow Architecture

The diagram below shows how OpenSwordigo processes game assets and renders graphics:

```mermaid
graph TD
    A["Game Assets (.scene, .POD, .pvr)"] --> B["Caver::VFS Asset Engine"]
    B --> C["Caver::ProtobufDecoder"]
    B --> D["Caver::PODLoader"]
    B --> E["Caver::PVRLoader"]
    
    C --> F["Caver::Scene & SceneObject"]
    F --> G["Caver::ComponentFactory"]
    
    G --> H["Caver::BackgroundComponent"]
    G --> I["Caver::ModelComponent"]
    G --> J["Caver::GroundMeshComponent"]
    
    D --> I
    E --> H
    E --> I
    
    H --> K["Caver::RenderingContext"]
    I --> K
    J --> K
    
    K --> L["OpenGL ES 2.0 / SDL3 Window"]
```

---

## 8. Development Status and Roadmap

- [x] **Milestone 1: Engine Core and Scene Parsing**
  - Implement zero-dependency Protobuf binary decoder.
  - Implement `Scene`, `SceneObject`, and `ObjectTemplate` graph structures.
  - Implement `ComponentFactory` and component registry.
- [x] **Milestone 2: Native Rendering Pipeline**
  - Implement SDL3 window management and OpenGL ES 2.0 context.
  - Implement PVRTC1 and ETC1 texture decompression to RGBA8888.
  - Implement PowerVR `.POD` 3D mesh loader and vertex buffer creation.
  - Render real-time graphics at 60 FPS in `openswordigo_render`.
- [ ] **Milestone 3: Physics and Collision System**
  - Implement `PhysicsObjectComponent` and rigid body collision solvers.
  - Implement terrain polyline collision query system.
- [ ] **Milestone 4: Gameplay and Scripting Engine**
  - Implement player controller entity movement and state machine.
  - Integrate Lua 5.1 script execution for entity logic (`Caver::ScriptComponent`).
  - Implement HUD, user interface, audio hooks, and level transitions.

---

## 9. Legal Notice and Trademarks

OpenSwordigo is an independent open-source project.
Developers created this project for educational and software preservation purposes.
All trademarks, game assets, artwork, and audio files related to *Swordigo* belong to **Touch Foo**.
This repository does not contain proprietary game assets.

---

## 10. License

The source code of OpenSwordigo is released under the [MIT License](LICENSE).
