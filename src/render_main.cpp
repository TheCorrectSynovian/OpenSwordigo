#include <iostream>
#include <vector>
#include <SDL3/SDL.h>
#include "caver/graphics/gl_inc.h"
#include <caver/resource/vfs.h>
#include "caver/engine/app_runtime.h"
#include <caver/scene/scene.h>
#include <caver/graphics/rendering_context.h>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb/stb_image_write.h>

int main(int argc, char** argv) {
    std::cout << "========================================================\n";
    std::cout << " OpenSwordigo Native Windowed Renderer — Milestone 2 Audit\n";
    std::cout << "========================================================\n\n";

    // 1. Initialize VFS
    caver::VFS::instance().initDefaultPaths();

    std::string sceneFile = "town_herohouse.scene";
    if (argc > 1) {
        sceneFile = argv[1];
    }

    std::cout << "[OpenSwordigo] Target Scene: " << sceneFile << "\n";

    // 2. Initialize SDL3 Subsystems
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << "[OpenSwordigo] Error initializing SDL3: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

    int winWidth = 1280;
    int winHeight = 720;

    SDL_Window* window = SDL_CreateWindow(
        "OpenSwordigo Native Engine — Milestone 2 Audit Pass",
        winWidth, winHeight,
        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
    );

    if (!window) {
        std::cerr << "[OpenSwordigo] Error creating SDL3 window: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    SDL_GLContext glContext = SDL_GL_CreateContext(window);
    if (!glContext) {
        std::cerr << "[OpenSwordigo] Error creating OpenGL context: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    SDL_GL_MakeCurrent(window, glContext);
    SDL_GL_SetSwapInterval(1);

    // 3. Initialize Caver RenderingContext & GL Pipeline
    if (!caver::RenderingContext::instance().initGL(winWidth, winHeight)) {
        std::cerr << "[OpenSwordigo] Failed initializing GL rendering context." << std::endl;
        SDL_GL_DestroyContext(glContext);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // 4. Test Load house.POD & native scene graph
    std::cout << "[OpenSwordigo] Testing direct PODLoader parsing on house.POD...\n";
    auto testHouse = caver::PODLoader::loadModel("house.POD");

    // Initialize OpenSwordigo Engine AppRuntime
    caver::AppRuntime::instance().initEngine(winWidth, winHeight);

    bool running = true;
    int frameCount = 0;
    bool frameSaved = false;
    bool batchMode = (std::getenv("OPENSWORDIGO_BATCH") != nullptr);
    int maxFrames = batchMode ? 300 : 9999999;

    std::string artifactFramePath = "/home/quantumcreeper/.gemini/antigravity/brain/824dc72a-6fff-4a97-84bc-a0ab0d5b4d19/rendered_frame.png";

    while (running && frameCount < maxFrames) {
        SDL_Event ev;
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_EVENT_QUIT) {
                running = false;
            } else if (ev.type == SDL_EVENT_WINDOW_RESIZED) {
                int w = ev.window.data1;
                int h = ev.window.data2;
                caver::RenderingContext::instance().setViewport(w, h);
            } else if (ev.type == SDL_EVENT_MOUSE_BUTTON_DOWN) {
                float mx = ev.button.x;
                float my = winHeight - ev.button.y; // Flip Y for OpenGL orthographic coordinate system
                caver::AppRuntime::instance().handleMouseInput(mx, my, true);
            }
        }

        // Update & Render OpenSwordigo Engine AppRuntime
        caver::AppRuntime::instance().update(0.01667f);
        caver::AppRuntime::instance().render();

        // Capture frame 60 to PNG artifact
        if (frameCount == 60 && !frameSaved) {
            std::vector<uint8_t> pixels(winWidth * winHeight * 4);
            glReadPixels(0, 0, winWidth, winHeight, GL_RGBA, GL_UNSIGNED_BYTE, pixels.data());

            // Flip vertically for standard image orientation
            std::vector<uint8_t> flippedPixels(winWidth * winHeight * 4);
            for (int y = 0; y < winHeight; ++y) {
                std::memcpy(flippedPixels.data() + (winHeight - 1 - y) * winWidth * 4,
                            pixels.data() + y * winWidth * 4,
                            winWidth * 4);
            }

            stbi_write_png(artifactFramePath.c_str(), winWidth, winHeight, 4, flippedPixels.data(), winWidth * 4);
            frameSaved = true;
            std::cout << "[OpenSwordigo] Successfully captured frame #60 to artifact image:\n  "
                      << artifactFramePath << "\n\n";
        }

        SDL_GL_SwapWindow(window);
        frameCount++;
        SDL_Delay(16);
    }

    std::cout << "========================================================\n";
    std::cout << " OPENSWORDIGO RUNTIME METRICS:\n";
    std::cout << "  Rendered Frames:   " << frameCount << "\n";
    std::cout << "  Draw Calls/Frame:  " << caver::RenderingContext::instance().getDrawCallCount() << "\n";
    std::cout << "  Triangles/Frame:   " << caver::RenderingContext::instance().getTriangleCount() << "\n";
    std::cout << "  Captured Frame:    " << (frameSaved ? "SAVED" : "SKIPPED") << "\n";
    std::cout << "========================================================\n\n";

    caver::AppRuntime::instance().shutdown();

    SDL_GL_DestroyContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
