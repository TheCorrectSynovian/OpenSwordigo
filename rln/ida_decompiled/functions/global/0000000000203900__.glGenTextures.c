/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203900
 * Mangled: .glGenTextures
 * Demangled: .glGenTextures
 *
 * Callers: 3
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004CC108  Caver::Texture::SetNearestFiltering(void)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 1
 *   0x00000000006FECE0  glGenTextures
 *
 * Referenced strings: 1
 *   insn=0x0000000000203908 string=0x000000000020390C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glGenTextures()
{
  return glGenTextures();
}

