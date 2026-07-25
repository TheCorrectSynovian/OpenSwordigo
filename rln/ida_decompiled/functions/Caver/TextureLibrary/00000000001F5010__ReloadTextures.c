/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5010
 * Mangled: ._ZN5Caver14TextureLibrary14ReloadTexturesEb
 * Demangled: Caver::TextureLibrary::ReloadTextures(bool)
 *
 * Callers: 1
 *   0x0000000000478890  Java_com_touchfoo_swordigo_Native_reloadContext
 *
 * Callees: 1
 *   0x00000000004CD51C  Caver::TextureLibrary::ReloadTextures(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5018 string=0x00000000001F501C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::ReloadTextures(Caver::TextureLibrary *this, bool a2)
{
  return _ZN5Caver14TextureLibrary14ReloadTexturesEb(this, a2);
}

