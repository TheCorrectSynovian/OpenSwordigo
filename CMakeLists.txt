cmake_minimum_required(VERSION 3.14)
project(OpenSwordigo VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 99)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED sdl3)
find_package(OpenGL REQUIRED)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src/lua/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/luafilesystem/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/luasocket/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/toml-c
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
    ${SDL3_INCLUDE_DIRS}
    ${OPENGL_INCLUDE_DIR}
)

# =========================================================================
# Third-Party Dependencies
# =========================================================================
set(LUA_SOURCES
    src/lua/src/lapi.c
    src/lua/src/lauxlib.c
    src/lua/src/lbaselib.c
    src/lua/src/lcode.c
    src/lua/src/ldblib.c
    src/lua/src/ldebug.c
    src/lua/src/ldo.c
    src/lua/src/ldump.c
    src/lua/src/lfunc.c
    src/lua/src/lgc.c
    src/lua/src/linit.c
    src/lua/src/liolib.c
    src/lua/src/llex.c
    src/lua/src/lmathlib.c
    src/lua/src/lmem.c
    src/lua/src/loadlib.c
    src/lua/src/lobject.c
    src/lua/src/lopcodes.c
    src/lua/src/loslib.c
    src/lua/src/lparser.c
    src/lua/src/lstate.c
    src/lua/src/lstring.c
    src/lua/src/lstrlib.c
    src/lua/src/ltable.c
    src/lua/src/ltablib.c
    src/lua/src/ltm.c
    src/lua/src/lundump.c
    src/lua/src/lvm.c
    src/lua/src/lzio.c
)
add_library(lua_static STATIC ${LUA_SOURCES})

add_library(luafilesystem STATIC src/luafilesystem/src/lfs.c)
target_link_libraries(luafilesystem PRIVATE lua_static)

set(LUASOCKET_SOURCES
    src/luasocket/src/luasocket.c
    src/luasocket/src/auxiliar.c
    src/luasocket/src/buffer.c
    src/luasocket/src/except.c
    src/luasocket/src/inet.c
    src/luasocket/src/io.c
    src/luasocket/src/mime.c
    src/luasocket/src/options.c
    src/luasocket/src/select.c
    src/luasocket/src/tcp.c
    src/luasocket/src/timeout.c
    src/luasocket/src/udp.c
)
if(WIN32)
    list(APPEND LUASOCKET_SOURCES src/luasocket/src/wsocket.c)
else()
    list(APPEND LUASOCKET_SOURCES src/luasocket/src/usocket.c)
endif()
add_library(luasocket STATIC ${LUASOCKET_SOURCES})
target_link_libraries(luasocket PRIVATE lua_static)

add_library(toml_c STATIC src/toml-c/toml.c)

# =========================================================================
# OpenSwordigo Core Engine & Render Targets
# =========================================================================
set(OPENSWORDIGO_SOURCES
    src/math/caver_math.cpp
    src/resource/vfs.cpp
    src/resource/protobuf_decoder.cpp
    src/scene/component_factory.cpp
    src/scene/scene_object.cpp
    src/scene/object_template.cpp
    src/scene/scene.cpp
    src/graphics/pvrtc_decoder.cpp
    src/graphics/pvr_loader.cpp
    src/graphics/pod_loader.cpp
    src/graphics/shader_program.cpp
    src/graphics/rendering_context.cpp
    src/graphics/gl_render_device.cpp
    src/graphics/font.cpp
    src/components/background_component.cpp
    src/components/model_component.cpp
    src/components/ground_mesh_component.cpp
    src/components/light_component.cpp
    src/resource/texture_library.cpp
    src/resource/model_library.cpp
    src/gui/gui_view.cpp
    src/gui/gui_rounded_rect.cpp
    src/gui/gui_textured_rect.cpp
    src/gui/gui_label.cpp
    src/gui/gui_button.cpp
    src/gui/gui_frame_view.cpp
    src/gui/gui_navigation_controller.cpp
    src/gui/main_menu_view_controller.cpp
    src/game/game_view_controller.cpp
    src/engine/app_runtime.cpp
)

find_package(ZLIB REQUIRED)

add_library(openswordigo_core STATIC ${OPENSWORDIGO_SOURCES})
target_link_libraries(openswordigo_core PUBLIC lua_static luafilesystem luasocket toml_c ${OPENGL_LIBRARIES} ZLIB::ZLIB)

# Native driver executable (CLI scene parser)
add_executable(openswordigo_native src/main.cpp)
target_link_libraries(openswordigo_native PRIVATE openswordigo_core)

# Native windowed renderer executable (Milestone 2)
add_executable(openswordigo_render src/render_main.cpp)
target_link_libraries(openswordigo_render PRIVATE openswordigo_core ${SDL3_LIBRARIES} ${OPENGL_LIBRARIES})
