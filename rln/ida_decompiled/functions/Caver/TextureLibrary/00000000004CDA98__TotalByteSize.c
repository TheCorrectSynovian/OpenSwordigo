/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CDA98
 * Mangled: _ZN5Caver14TextureLibrary13TotalByteSizeEv
 * Demangled: Caver::TextureLibrary::TotalByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FBD10  Caver::TextureLibrary::TotalByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureLibrary::TotalByteSize(Caver::TextureLibrary *this)
{
  return *((unsigned int *)this + 15);
}

