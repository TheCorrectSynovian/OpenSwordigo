#ifndef CAVER_PVR_LOADER_H
#define CAVER_PVR_LOADER_H

#include "caver/graphics/gl_inc.h"
#include <stdint.h>
#include <vector>

bool pvr_decode_to_rgba(const uint8_t* file_data, size_t file_size, std::vector<uint8_t>& rgba_out, int& width, int& height);
bool pvr_upload_compressed_to_tex(const uint8_t* file_data, size_t file_size, uint32_t tex_name, int& out_w, int& out_h);

extern bool g_pvr_software_decode;

uint32_t pvr_load_texture_from_memory(const uint8_t* data, size_t size, int* out_width = nullptr, int* out_height = nullptr);

#endif // CAVER_PVR_LOADER_H
