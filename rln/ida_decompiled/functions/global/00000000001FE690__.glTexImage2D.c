/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE690
 * Mangled: .glTexImage2D
 * Demangled: .glTexImage2D
 *
 * Callers: 2
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *
 * Callees: 1
 *   0x00000000006FEA88  glTexImage2D
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE698 string=0x00000000001FE69C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glTexImage2D()
{
  return glTexImage2D();
}

