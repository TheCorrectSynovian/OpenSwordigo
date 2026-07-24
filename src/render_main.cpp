#include <iostream>
#include <vector>
#include <SDL3/SDL.h>
#include "caver/graphics/gl_inc.h"
#include <caver/resource/vfs.h>
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

    // 4. Load native scene graph
    caver::Scene scene;
    if (!scene.loadFromFile(sceneFile)) {
        std::cerr << "[OpenSwordigo] Failed loading scene: " << sceneFile << std::endl;
        SDL_GL_DestroyContext(glContext);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Center camera on scene
    caver::RenderingContext::instance().setCamera(caver::Vector2(5000.0f, 4000.0f));

    std::cout << "\n[OpenSwordigo] Starting native OpenGL ES 2.0 render loop...\n";

    bool running = true;
    int frameCount = 0;
    int maxFrames = 120;
    bool frameSaved = false;

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
            }
        }

        // Update native engine logic
        scene.update(0.01667f);

        // Render native scene frame
        caver::RenderingContext::instance().beginFrame();
        scene.render(caver::RenderingContext::instance());
        caver::RenderingContext::instance().endFrame();

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

            if (stbi_write_png(artifactFramePath.c_str(), winWidth, winHeight, 4, flippedPixels.data(), winWidth * 4)) {
                std::cout << "[OpenSwordigo] Successfully captured frame #" << frameCount << " to artifact image:\n"
                          << "  " << artifactFramePath << std::endl;
                frameSaved = true;
            } else {
                std::cerr << "[OpenSwordigo] Warning: Failed capturing frame to " << artifactFramePath << std::endl;
            }
        }

        SDL_GL_SwapWindow(window);
        frameCount++;
    }

    // Report per-frame runtime metrics
    size_t drawCalls = caver::RenderingContext::instance().getDrawCallCount();
    size_t triangles = caver::RenderingContext::instance().getTriangleCount();

    std::cout << "\n========================================================\n";
    std::cout << " MILESTONE 2 RUNTIME METRICS:\n";
    std::cout << "  Rendered Frames:   " << frameCount << "\n";
    std::cout << "  Draw Calls/Frame:  " << drawCalls << "\n";
    std::cout << "  Triangles/Frame:   " << triangles << "\n";
    std::cout << "  Captured Frame:    " << (frameSaved ? "SAVED" : "FAILED") << "\n";
    std::cout << "========================================================\n";

    SDL_GL_DestroyContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
